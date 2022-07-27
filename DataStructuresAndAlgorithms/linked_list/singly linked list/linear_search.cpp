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
		t = new Node;
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
Node * linear_search(Node *p,int key)
{
	while(p)
	{
		if(p->data==key)
		{
			return p;
		}
		p=p->next;
	}
	return NULL;
}

Node * linear_search_2(Node *p,int key)
{
	Node *q;
	
	while(p)
	{
		if(p->data==key)
		{
			q->next=p->next;
			p->next=first;
			first=p;
			return p;
		}
		q=p;
		p=p->next;
	}
	return NULL;
}

Node * recursive_search(Node *p, int key)
{
	if(p==0)
	{
		return  NULL;
	}
	if(p->data==key)
	{
		return p;
	}
	return recursive_search(p->next,key);
}

int main()
{
	int a[]={1,2,3,4,5};
	
	create(a,5);
	
	Node * element;
	element = linear_search_2(first,2);
	element = linear_search_2(first,5);
	element = linear_search_2(first,2);
	element = linear_search_2(first,5);
	//Node * element = recursive_search(head,2);
	if(element)
	{
		cout<<element->data<<" -> found"<<endl;
	}
	else
	{
		cout<<"not found"<<endl;
	}
	display(first);
}
