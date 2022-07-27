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
	Node *last,*t;
	
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
		last=t;
		first->prev=t;
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
	if(p==NULL)
	{
		return 0;
	}
	do
	{
		c++;
		p=p->next;
	}while(p!=first);
	return c;
}

void insert(Node *p,int index, int x)
{
	Node *t=NULL;
	
	
	if(index<0 || index>count(p))
	{
		return; 
	}
	
	if(index==0)
	{
		t=new Node;
		t->data=x;
		if(first==NULL)
		{
			first=t;
			first->next=first->prev=first;
		}
		else
		{
			last=first->prev;
			t->next=first;
			first->prev=t;
			t->prev=last;
			last->next=t;
			first=t;
		}
	}
	else
	{
		t=new Node;
		t->data=x;
		for(int i=0;i<index-1;i++)
		{
			p=p->next;
		}
		t->next=p->next;
		t->prev=p;
		if(p->next)
		{
			p->next->prev=t;
		}
		if(index==count(p))
		{
			last=t;
		}
		p->next=t;	
	}
	
	
}

int main()
{
	int a[]={};
	
	//create(a,1);
	insert(first,0,0);
	insert(first,1,2);
	insert(first,2,3);
	insert(first,0,4);
	insert(first,3,5);
	display(first);

	cout<<endl<<first->prev->data;
	cout<<endl<<last->next->data;

}
