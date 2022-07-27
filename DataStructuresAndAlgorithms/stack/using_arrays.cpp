#include<iostream>
using namespace std;

class Stack
{
	public:
		int size;
		int top;
		int *s;
};

void create(Stack *st)
{
	cout<<"enter size"<<endl;
	cin>>st->size;
	st->top=-1;
	st->s=new int[st->size];
}

void display(Stack st)
{
	for(int i=st.top;i>=0;i--)
	{
		cout<<st.s[i]<<" ";
	}
	cout<<endl;
}

void push(Stack *st,int x)
{
	if(st->top==st->size-1)
	{
		cout<<"stack overflow"<<endl;
	}
	else
	{
		st->top++;
		st->s[st->top]=x;
	}
}

int pop(Stack *st)
{
	int x=-1;
	if(st->top==-1)
	{
		cout<<"stack underflow"<<endl;
	}
	else
	{
		x=st->s[st->top--];
	}
	return x;
}

int index_element(Stack st,int index)
{
	int x=-1;
	if(st.top-index+1<0)
	{
		cout<<"invalid index"<<endl;
	}
	else
	{
		x=st.s[st.top-index+1];
	}
	
	
	return x;
}

bool isEmpty(Stack st)
{
	if(st.top==-1)
	{
		return 1;
	}
	
	return 0;
	
}

bool isFull(Stack st)
{
	if(st.top==st.size-1)
	{
		return 1;
	}
	
	return 0;
	// return st.top==st.size-1;
}

int peek(Stack st)
{
	if(st.top)
	{
		return st.s[st.top];
	}
	return-1;
}

int main()
{
	Stack st;
	create(&st);
	
	push(&st,10);
	push(&st,20);
	push(&st,30);
	push(&st,40);
	push(&st,50);
	display(st);
	
	//cout<<pop(&st)<<endl;
	//cout<<pop(&st)<<endl;

	cout<<peek(st,1)<<endl;
	cout<<peek(st,4)<<endl;
	cout<<peek(st,3)<<endl;
	//pop(&st);pop(&st);pop(&st);
	if(isEmpty(st))
	{
		cout<<"empty"<<endl;
	}
	else
	{
		cout<<"non-empty"<<endl;
	}
	
	if(isFull(st))
	{
		cout<<"full"<<endl;
	}
	else
	{
		cout<<"not-full"<<endl;
	}
	pop (&st);pop(&st);	
	cout<<stackTop(st)<<endl;
	display(st);
}

