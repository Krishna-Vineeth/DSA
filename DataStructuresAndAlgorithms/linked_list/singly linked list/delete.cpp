#include<iostream>
using namespace std;

class Node 
{
	public:
		int data;
		Node * next;
}*first = NULL;

void create(int *a,int n)
{
	Node * last, *t;
	
	first = new Node;
	first->data=a[0];
	first->next=NULL;
	last= first;
	
	for(int i=1;i<n;i++)
	{
		t=new Node;
		t->data=a[i];
		t->next=NULL;
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

int del(Node *first,int index)
{
	Node *p,*q;
	int x,i;
	
	if(index<1 || index>count(first))
	{
		return -1;
	}
	if(index==1)
	{
		x=first->data;
		p=first;
		first=first->next;
		delete p;
	}
	else
	{
		p=first;
		q=NULL;
		for(i=0;i<index-1 && p;i++)
		{
			q=p;
			p=p->next;
		}
		if(p)
		{
			q->next=p->next;
			x=p->data;
			delete p;
		}
	}
	return x;
}

int main()
{
	int a[]={1,2,3,4,5};
	
	create(a,5);
	display(first);	
	cout<<endl<<del(first,0)<<endl;
	display(first);	
	cout<<endl<<del(first,3)<<endl;
	display(first);	
}
