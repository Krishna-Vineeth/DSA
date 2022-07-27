#include<iostream>
using namespace std;

class Node
{
	public:
		int data;
		Node *next;
}*first=NULL,*last=NULL;

void create(int *a, int n)
{
	Node *t;
	
	first = new Node;
	first->data=a[0];
	first->next=first;
	last=first;
	
	for(int i=1;i<n;i++)
	{
		t=new Node;
		t->data=a[i];
		t->next=last->next;   //first
		last->next=t;
		last=t;
	}
}

void display(Node *p)
{
	do
	{
		cout<<p->data<<" ";
		p=p->next;
	}while(p!=first);
	
//	while(p)                        for debugging
//	{
//		cout<<p->data<<" ";
//		p=p->next;
//	}
}

void recursive_display(Node *p)
{
	static int flag=0;
	
	if(p!=first || flag==0)
	{
		flag=1;
		cout<<p->data<<" ";
		recursive_display(p->next);
	}
	flag=0;
}
int main()
{
	int a[]={1,2,3,4,5};
	
	create(a,5);
	cout<<last->next->data<<endl;
	recursive_display(first);
}
