#include<iostream>
using namespace std;

class Node
{
	public:
		Node *prev;
		int data;
		Node *next;
}*first=NULL,*last;

void create (int *a,int n)
{
	Node *t;
	
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

int main()
{
	int a[]={1,2,3,4,5};
	
	create(a,5);
	display(first);
	
	cout<<endl<<first->prev->data;
	cout<<endl<<last->next->data;
}
