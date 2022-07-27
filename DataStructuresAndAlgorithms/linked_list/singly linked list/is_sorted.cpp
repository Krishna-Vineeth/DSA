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

bool issorted(Node *p)
{
	int x=INT_MIN;
	
	while(p)
	{
		if(p->data<x)
		{
			return false;
		}
		else
		{
			x=p->data;
			p=p->next;
		}
	}
	return true;
}

int main()
{
	int a[]={1,2,8,4,5};
	
	create(a,5);
	display(first);
	if(issorted(first))
	{
		cout<<"-> sorted";
	}
	else
	{
		cout<<"-> not sorted";
	}
	
}
