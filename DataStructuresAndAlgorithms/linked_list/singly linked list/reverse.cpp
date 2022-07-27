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

void reverse1(Node *p)
{
	int *a,i=0;
	Node *q;
	a=new int[count(p)];
	q=p;
	
	while(q)
	{
		a[i]=q->data;
		q=q->next;
		i++;	
	}	
	q=p;
	i--;
	while(q)
	{
		q->data=a[i];
		q=q->next;
		i--;
	}
}

void reverse2(Node *p)
{
	Node *q=NULL,*r=NULL;
	
	while(p)
	{
		r=q;
		q=p;
		p=p->next;
		q->next=r;
	}
	first=q;
}

void reverse3(Node *p,Node *q)
{
	if(p)
	{
		reverse3(p->next,p);
		p->next=q;
	}
	else
	{
		first=q;
	}
}

int main()
{
	int a[]={1,2,3,4,5};
	create(a,5);
	display(first);
	cout<<endl;
	//reverse1(first);
	//reverse2(first);
	reverse3(first,NULL);
	display(first);
}
