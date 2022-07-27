#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Stack
{
	int top;
	unsigned capacity;
	int* array;
};


struct Stack* createStack( unsigned capacity )
{
	struct Stack* stack = (struct Stack*)
		malloc(sizeof(struct Stack));

	if (!stack)
		return NULL;

	stack->top = -1;
	stack->capacity = capacity;

	stack->array = (int*) malloc(stack->capacity *
								sizeof(int));

	return stack;
}
int isEmpty(struct Stack* stack)
{
	return stack->top == -1 ;
}
char peek(struct Stack* stack)
{
	return stack->array[stack->top];
}
char pop(struct Stack* stack)
{
	if (!isEmpty(stack))
		return stack->array[stack->top--] ;
	return '$';
}
void push(struct Stack* stack, char op)
{
	if(stack->top==stack->capacity-1)
	{
		printf("stack overflow");
	}
	else
	{
		stack->array[++stack->top] = op;
	}
}


int isOperand(char ch)
{
	return (ch >= 'a' && ch <= 'z') ||
		(ch >= 'A' && ch <= 'Z');
}

int Prec(char ch)
{
	switch (ch)
	{
	case '+':
	case '-':
		return 1;

	case '*':
	case '/':
		return 2;

	case '^':
		return 3;
	}
	return -1;
}

int infixToPostfix(char* exp)
{
	int i, j;

	struct Stack* stack = createStack(strlen(exp));
	
	if(!stack) 
		return -1 ;

	for (i = 0, j = 0; exp[i]; i++)
	{
		if (isOperand(exp[i]))
			exp[j++] = exp[i];
		
		else if (exp[i] == '(')
			push(stack, exp[i]);
	
		else if (exp[i] == ')')
		{
			while (!isEmpty(stack) && peek(stack) != '(')    
				exp[j++] = pop(stack);
//			if (!isEmpty(stack) && peek(stack) != '(')
//				return -1; // invalid expression			
			pop(stack);
		}
		else 
		{
			while (!isEmpty(stack) && Prec(exp[i]) <= Prec(peek(stack))){
				if(exp[i]=='^' && peek(stack)=='^')
					break;
				else
				{
					exp[j++] = pop(stack);	
				}
			}	
			push(stack, exp[i]);
		}

	}

	while (!isEmpty(stack))
		exp[j++] = pop(stack);

	exp[j++] = '\0';
	printf( "%s", exp );
}

int main()
{
	char exp[] = "a^b^c^d";//"a+b*(c^d-e)^(f+g*h)-i";//a+b*(c+d)/f+d*e";
	infixToPostfix(exp);
	return 0;
}

