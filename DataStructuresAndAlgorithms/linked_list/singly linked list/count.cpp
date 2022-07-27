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

int recursive_count(Node *p)
{
	if(p==0)
	{
		return 0;
	}
	
	return recursive_count(p->next)+1;
}
int main()
{
	int A[] = {10,20,5,1,2};
	Node *first=create(A,5);
	display(first);
	cout << endl <<count(first);
	cout << endl <<recursive_count(first);
}
