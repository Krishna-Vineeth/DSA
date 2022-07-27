#include<iostream>
using namespace std;


class Node
{
	public:
		int data;
		Node *next;
};

Node* create(int *a,int n)
{
	int i;
	Node *first,*last,*t;
	
	first = new Node;
	first->data=a[0];
	first->next=NULL;
	last = first;
	
	for(i=1;i<n;i++)
	{
		t = new Node;
		t->data = a[i];
		t->next = NULL;
		last->next=t;
		last=t;
	}
	
	return first;
}

int sum(Node *p)
{
	int s=0;
	
	while(p)
	{
		s+=p->data;
		p=p->next;
	}
	return s;
}

int recursive_sum(Node *p)
{
	if(p==0)
	{
		return 0;
	}
	
	return recursive_sum(p->next)+p->data;
}
int main()
{
	int A[] = {1,2,3,4,5};
	Node *first=create(A,5);
	
	cout<<sum(first)<<endl;	
	cout<<recursive_sum(first);
}
