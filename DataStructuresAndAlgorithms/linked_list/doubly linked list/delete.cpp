#include<iostream>
using namespace std;

class Node
{
	public:
		Node *prev;
		int data;
		Node *next;
}*first=NULL;

void create(int *a, int n)
{
	Node *last,*t;
	
	first=new Node;
	first->data=a[0];
	first->prev=first->next=NULL;
	last=first;
	
	for(int i=1;i<n;i++)
	{
		t=new Node;
		t->data=a[i];
		t->next=last->next;
		t->prev=last;
		last->next=t;
		last=t;
	}
	
}

void display(Node *p)
{
	while(p)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
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

int del(Node *p,int index)
{
	int x=-1;
	
	if(index<1 || index>count(p))
	{
		return x;
	}
	
	if(index==1)
	{
		first=first->next;
		if(first)
		{
			first->prev=NULL;
		}
		x=p->data;
		delete p;
	}
	else
	{
		for(int i=0;i<index-1;i++)
		{
			p=p->next;
		}
		p->prev->next=p->next;
		if(p->next)
		{
			p->next->prev=p->prev;
		}
		x=p->data;
		delete p;
	}
	
	return x;
}

int main()
{
	int a[]={1,2,3,4,5};
	
	create(a,5);
	display(first);
	cout<<endl<<del(first,5)<<endl;
	display(first);	
}

