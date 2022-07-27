#include<iostream>
using namespace std;

class Node
{
	public:
		int data;		
		Node *next;
}*first=NULL,*first_1=NULL;

Node * create(int *a,int n)
{
	Node *last,*t;
	
	first=new Node;
	first->data=a[0];
	first->next=NULL;
	last=first;
	
	for(int i=1;i<n;i++)
	{
		t = new Node;
		t->data=a[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
	
	return first;
}

int count(Node *p)
{
	int c=0;
	while(p)
	{
		c++;
		p=p->next;
	}
	return c;
}

void display(Node *p)
{
	while(p)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
}

void insert(Node *p,int index,int x)
{
	Node *t=NULL;
	if(index<0 || index>count(p)) 
	{
		return;
	}
	t = new Node;
	t->data=x;
	
	if(index==0)
	{
		t->next=first;
		first=t;	
	}
	else
	{
		for(int i=0;i<index-1;i++)
		{
			p=p->next;
		}
		t->next=p->next;
		p->next=t;
		
	}
}

void insert_last(Node *p,int x)
{
	Node * t=new Node,*last;
	t->data = x;
	t->next=NULL;
	
	if(first==NULL)
	{
		first=last=t;
	}
	else
	{
		last->next=t;
		last=t;
	}
}

void sorted_insert(Node *p,int x)
{
	Node *t = new Node,*q;
	t->data = x;
	t->next = NULL;
	
	if(first_1==NULL)
	{
		first_1=t;
	}
	
	else
	{
		while(p && p->data<x)
		{
			q=p;
			p=p->next;
		}
		if(p==first_1)
		{
			first_1=t;
		}
		else
		{
			t->next=q->next;
			q->next=t;
		}
	}
}
int main()
{
	int a[]={};
	
	//create(a,3);
	insert(first,0,0);
	insert(first,1,1);
	insert(first,0,3);
	insert(first,3,5);
	insert_last(first,10);
	sorted_insert(first_1,-2);
	sorted_insert(first_1,5);
	sorted_insert(first_1,20);
	sorted_insert(first_1,3);
	sorted_insert(first_1,15);
	sorted_insert(first_1,40);
	display(first);
	cout<<endl;
	display(first_1);
}
