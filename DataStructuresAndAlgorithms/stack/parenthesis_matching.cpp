#include<iostream>
using namespace std;

class Node
{
	public:
		char data;
		Node *next;
};

class Stack
{
	public:
		Node *top=NULL;
};

void push(Stack *st,char x)
{
	Node *t;
	t=new Node;
	
	if(t==NULL)
	{
		cout<<"stack is full"<<endl;
	}
	else
	{
		t->data=x;
		t->next=st->top;
		st->top=t;
	}
}

char pop(Stack *st)
{
	Node *t;
	char x=-1;
	
	if(st->top==NULL)
	{
		cout<<"stack is empty"<<endl;
	}
	else
	{
		t=st->top;
		st->top=st->top->next;
		x=t->data;
		delete t;
	}
	return x;
}

void display(Stack st)
{
	Node *p;
	p=st.top;
	
	while(p)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
	cout<<endl;
}

bool isEmpty(Stack st)
{
	return st.top?0:1;
}

bool isFull(Stack st)
{
	Node *t=new Node;
	int r=t?1:0;
	delete t;
	return r;
}

char stackTop(Stack st)
{
	if(st.top)
	{
		return st.top->data;
	}
	return -1;
}

char peek(Stack st,int index)
{
	if(isEmpty(st))
	{
		return -1;
	}
	else
	{
		Node *p =st.top;
		for(int i=0;i<index-1&&p!=NULL;i++)
		{
			p=p->next;
		}
		if(p!=NULL)
		{
			return p->data;
		}
		else
		{
			return -1;
		}
	}
}

bool isBalanced(char *s)
{
	Stack st;
	
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]=='(')
		{
			push(&st,s[i]);
		}
		else if(s[i]==')')
		{
			if(st.top==NULL)
			{
				return 0;
			}
			pop(&st);
		}
	}
	
	return isEmpty(st)?true:false;
}

bool isMatchingPair(char c1, char c2)
{
	if (c1 == '(' && c2 == ')')
        return 1;
    else if (c1 == '{' && c2 == '}')
        return 1;
    else if (c1 == '[' && c2 == ']')
        return 1;
    else
        return 0;
}

bool isBalanced2(char *s)
{
	Stack st;
	
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]=='(' || s[i]=='{' || s[i]=='[')
		{
			push(&st,s[i]);
		}
		else if(s[i]==')' || s[i]==']' || s[i]=='}')
		{
			if(st.top==NULL)
			{
				return 0;
			}
			else if (!isMatchingPair(pop(&st), s[i]))
			{
				return 0;	
			}
		}
	}
	
	return isEmpty(st)?true:false;
}

int main()
{
	char s[20] = "((a+b)*(b+c))()";
	char s1[20] = "{([a+b])*([b+c])}";
	cout<<isBalanced(s);
	cout<<isBalanced2(s1);
}
