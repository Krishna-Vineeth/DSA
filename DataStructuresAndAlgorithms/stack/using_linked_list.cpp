#include<iostream>
using namespace std;

class Node
{
	public:
	int data;
	Node *next;
};

class Stack
{
	public:
		Node *top=NULL;
};

void push(Stack *st,int x)
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

int pop(Stack *st)
{
	Node *t;
	int x=-1;
	
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

int stackTop(Stack st)
{
	if(st.top)
	{
		return top->data;
	}
	return -1;
}

int peek(Stack st,int index)
{
	if(isEmpty())
	{
		return -1;
	}
	else
	{
		Node *p =top;
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

int main()
{
	//we can use simply top as global variable instead of creating a stack
	//but this is not good way to implement and only good when we need to create only one stack
	//so we can construct a class stack and create an stack object in the main function as required.....
	Stack st;
	
	push(&st,10);
	push(&st,20);
	push(&st,30);
	push(&st,40);
	display(st);
	
	pop(&st);
	pop(&st);
	cout<<endl;
	display(st);
}
