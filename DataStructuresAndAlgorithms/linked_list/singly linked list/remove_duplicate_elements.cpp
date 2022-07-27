#include<iostream>
using namespace std;

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

void remove_duplicates(Node *p)
{
	Node *q=p->next;
	
	while(q)
	{
		if(p->data!=q->data)
		{
			p=q;
			q=q->next;	
		}
		else
		{
			p->next=q->next;
			delete q;
			q=p->next;
		}
	}
}

int main()
{
	int a[]={1,1,1,1,1,1};
	int n=sizeof(a)/sizeof(a[0]);
	
	create(a,n);
	display(first);
	cout<<endl;
	remove_duplicates(first);
	display(first);
}
