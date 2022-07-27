#include<iostream>
using namespace std; 

class Node
{
	public:
		Node *prev;
		int data;
		Node *next;
}*first=NULL;

void create(int *a,int n)
{
	Node *last,*t;
	
	first = new Node;
	first->data=a[0];
	first->next=first->prev=NULL;
	last=first;
	
	for(int i=1;i<n;i++)
	{
		t=new Node;
		t->data=a[i];
		t->next=last->next;    //NULL;
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

int main()
{
	int a[]={1,2,3,4,5};
	
	create(a,5);
	display(first);
	cout<<"length : "<<count(first);
}
