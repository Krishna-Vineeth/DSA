#include<iostream>
using namespace std;

class Node
{
	public:
		Node *prev;
		int data;
		Node *next;
}*first=NULL;

void create(int *a, int n)
{
	Node *last,*t;
	
	first=new Node;
	first->data=a[0];
	first->prev=first->next=NULL;
	last=first;
	
	for(int i=1;i<n;i++)
	{
		t=new Node;
		t->data=a[i];
		t->next=last->next;
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

void reverse(Node *p)
{
	Node *temp;
	
	while(p)
	{
		temp=p->next;
		p->next=p->prev;
		p->prev=temp;
		p=p->prev;
		if(p!=NULL && p->next==NULL)
		{
			first=p;
		}
	}
	
}

int main()
{
	int a[]={1,2,3,4,5};
	create(a,5);
	display(first);
	cout<<endl;
	reverse(first);
	display(first);
}
