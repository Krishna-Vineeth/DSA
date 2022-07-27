#include<iostream>
using namespace std;

class Node
{
	public:
		int data;
		Node *next;
};

Node *create(int a[],int n)
{
	Node *first, *last, *t;
	
	first = new Node;
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

int max_element(Node *p)
{
	int max=INT_MIN;
	
	while(p)
	{
		if(p->data>max)
		{
			max=p->data;
		}
		p=p->next;
	}
	return max;
}

int recursive_max(Node *p)
{
	int x;
	
	if(p==0)
	{
		return INT_MIN;
	}
	
	x=recursive_max(p->next);
	
	return x>p->data?x:p->data;
}

int min_element(Node *p)
{
	int min=INT_MAX;
	
	while(p)
	{
		if(p->data<min)
		{
			min=p->data;
		}
		p=p->next;
	}
	return min;
}

int recursive_min(Node *p)
{
	int x;
	
	if(p==0)
	{
		return INT_MAX;
	}
	
	x=recursive_min(p->next);
	
	return x<p->data?x:p->data;
}

int main()
{
	int a[]={0};
	Node *first = create(a,1);
	
	cout<<max_element(first)<<endl;
	cout<<min_element(first)<<endl;	
	cout<<recursive_max(first)<<endl;
	cout<<recursive_min(first);
}
