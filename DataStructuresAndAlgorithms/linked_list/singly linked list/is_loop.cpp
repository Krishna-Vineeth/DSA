#include<iostream>
using namespace std;

class Node
{
	public:
		int data;
		Node *next;
}*first=NULL;

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

void create_loop(int start,int end)
{
	Node *t1=first,*t2=first;
	
	for(int i=0;i<start-1;i++)
	{
		t1=t1->next;
	}
	for(int i=0;i<end-1;i++)
	{
		t2=t2->next;
	}
	
	t2->next=t1;
}

bool is_loop(Node *f)
{
	Node *p,*q;
	p=q=f;
	
	do
	{
		p=p->next;
		q=q->next;
		q=q?q->next:q;
	}while(p && q && p!=q);
	
	if(p==q)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int a[]={1,2,3,4,5};
	
	create(a,5);
	create_loop(3,5);
	
	if(is_loop(first))
	{
		cout<<"circular"<<endl;
	}
	else
	{
		cout<<"linear"<<endl;
	}
	//display(first);
	
	
}
