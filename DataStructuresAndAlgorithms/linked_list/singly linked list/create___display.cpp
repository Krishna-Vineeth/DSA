#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node *next;
}*first=NULL;

void create (int A[], int n)
{
	int i;
	struct Node *t,*last;
	first=(struct Node *)malloc(sizeof(struct Node));
	first->data=A[0];
	first->next=NULL;
	last=first;
	
	
	for(i=1;i<n;i++)
	{
		t=(struct Node *)malloc(sizeof(struct Node));
		t->data=A[i];
		t->next=NULL;
		last->next=t;
		last=t;
	}
}

void display(struct Node *p)
{
	while(p!=0)						// 0 represents NULL value
	{
		printf("%d ",p->data);
		p=p->next;
	}
}

void recursive_display(struct Node *p)
{
	if(p!=0)
	{
		printf("%d ",p->data);
		recursive_display(p->next);
	}
}
int main()
{
	int A[]={1,2,3,4,5};
	
	create(A,5);
	recursive_display(first);
	
	return 0;
}
/*
#include <iostream>
using namespace std;
 
class Node{
public:
    int data;
    Node* next;
};
 
int main() {
 
    int A[] = {3, 5, 7, 10, 15};
 
    Node* head = new Node;
 
    Node* temp;
    Node* last;
 
    head->data = A[0];
    head->next = NULL;
    last = head;
 
    // Create a Linked List
    for (int i=1; i<sizeof(A)/sizeof(A[0]); i++){
 
        // Create a temporary Node
        temp = new Node;
 
        // Populate temporary Node
        temp->data = A[i];
        temp->next = NULL;
 
        // last's next is pointing to temp
        last->next = temp;
        last = temp;
    }
 
    // Display Linked List
    Node* p = head;
 
    while (p != NULL){
        cout << p->data << " -> " << flush;
        p = p->next;
    }
 
    return 0;
}*/
