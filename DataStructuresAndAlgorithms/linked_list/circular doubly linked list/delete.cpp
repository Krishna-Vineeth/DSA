#include<iostream>
using namespace std;

class Node
{
	public:
		int data;
		Node *prev;
		Node *next;
}*first=NULL,*last=NULL;


void create(int *a,int n)
{
	Node *t;
	
	first=new Node;
	first->data=a[0];
	first->prev=first->next=first;
	last=first;
	
	for(int i=1;i<n;i++)
	{
		t=new Node;
		t->data=a[i];
		t->next=first;
		t->prev=last;
		last->next=t;
		first->prev=t;
		last=t;
	}
}

void display(Node *p)
{
	do
	{
		cout<<p->data<<" ";
		p=p->next;
	}while(p!=first);
}

int count(Node *p)
{
	int c=0;
	do
	{
		c++;
		p=p->next;
	}while(p!=first);	
	
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
			p->prev->next=p->next;
			p->next->prev=p->prev;
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
		p->next->prev=p->prev;
		if(index==count(p))
		{
			last=first->prev;
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
	cout<<endl<<first->prev->data;
	cout<<endl<<last->next->data;
	
}
