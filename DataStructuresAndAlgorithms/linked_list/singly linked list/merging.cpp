#include<iostream>
using namespace std;

class Node
{
	public:
		int data;
		Node *next;
}*first=NULL,*third=NULL;

Node * create(int *a,int n)
{
	Node *last,*t;
	
	first=new Node;
	first->data=a[0];
	first->next=NULL;
	last=first;
	
	for(int i=1;i<n;i++)
	{
		t=new Node;
		t->data=a[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
	
	return first;
}

void display(Node *p)
{
	while(p)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
}

void merge(Node *p, Node *q)
{
	Node *last;
	
	if(p->data<q->data)
	{
		third=last=p;
		p=p->next;
		last->next=NULL;
	}
	else
	{
		third=last=q;
		q=q->next;
		last->next=NULL;
	}
	
	while(p && q)
	{
		if(p->data<q->data)
		{
			last->next=p;
			last=p;
			p=p->next;
			last->next=NULL;
		}
		else
		{
			last->next=q;
			last=q;
			q=q->next;
			last->next=NULL;
		}
	}
	
	if(p)
	{
		last->next=p;
	}
	if(q)
	{
		last->next=q;
	}
}

int main()
{
	int a[]={1,3,5,7,9};
	int b[]={2,4,6,8,10};
	
	Node *f = create(a,5);
	Node *s = create(b,5);
	
	display(f);
	cout<<endl;
	display(s);
	cout<<endl;
	merge(s,f);
	display(third);
}
