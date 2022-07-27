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

void concatenate(Node *p,Node *q)
{
	third=p;
	
	while(p->next)
	{
		p=p->next;
	}
	
	p->next=q;
	q=NULL;
}

int main()
{
	int a[]={1,2,3,4,5};
	int b[]={6,7,8,9,10};
	
	Node *f =create(a,5);
	Node *s =create(b,5);
	
	display(f);
	cout<<endl;
	display(s);
	cout<<endl;
	concatenate(f,s);
	display(third);
}
