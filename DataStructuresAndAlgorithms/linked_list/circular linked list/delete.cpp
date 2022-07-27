#include<iostream>
using namespace std;

class Node 
{
	public:
		int data;
		Node * next;
}*first = NULL,*last=NULL;

void create(int *a, int n)
{
	Node *t;
	
	first = new Node;
	first->data=a[0];
	first->next=first;
	last=first;
	
	for(int i=1;i<n;i++)
	{
		t=new Node;
		t->data=a[i];
		t->next=last->next;   //first
		last->next=t;
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
	Node *q;
	int i,x;
	if(index <1 || index >count(first))
		return -1;
	if(index==1)
	{
		while(p->next!=first)
			p=p->next;
		
		x=first->data;
		if(first==p)
		{
			delete first;
			first=NULL;
		}
		else
		{
			p->next=first->next;
			delete first;
			first=p->next;
		}
	}
	else
	{
		for(i=0;i<index-2;i++)
			p=p->next;
		q=p->next;
		if(index==count(first))
		{
			last=p;
		}
		p->next=q->next;
		x=q->data;
		delete q;
	}
	return x;
}

int main()
{
	int a[]={1,20,3,4,5,6};
	
	create(a,6);
	display(first);	
	cout<<endl<<last->next->data;
	cout<<endl<<del(first,6)<<endl;
	display(first);
	cout<<endl<<last->next->data<<endl;
	
}
