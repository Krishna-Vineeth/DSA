#include<iostream>
using namespace std;

class Node
{
	private:
		int data;
		Node *next;
	
	public:
		friend class Queue;
		Node(int x)
		{
			data=x;
			next=NULL;
		}
};

class Queue
{
	private:
		Node *front, *rear;
	
	public:
		Queue()
		{
			front=rear=NULL;
		}
		
		void enqueue(int x);
		int dequeue();
		int frontvalue();
		int rearvalue();
		bool isempty();
		bool isfull();
		int display();
};

void Queue::enqueue(int x)
{
	Node *t = new Node(x);
	
	if(t==NULL)
	{
		cout<<"queue is full"<<endl;
	}
	else
	{
		if(rear==NULL)
		{
			front=rear=t;
		}
		else
		{
			rear->next=t;
			rear=t;
		}
	}
}

int Queue::dequeue()
{
	int x=-1;
	
	if(front==NULL)
	{
		cout<<"queue is empty"<<endl;
	}
	else
	{
		Node *t;
		x=front->data;
		t=front;
		front=front->next;
		if (front == NULL)
            rear = NULL;
		delete(t);
	}
	return x;
}

int Queue::frontvalue()
{
	if(front)
	{
		return front->data;
	}
	return -1;
}

int Queue::rearvalue()
{
	if(rear)
	{
		return rear->data;
	}
	return -1;
}

bool Queue::isempty()
{
	if(front==NULL)
	{
		return true;
	}
	return false;
}

bool Queue::isfull()
{
	Node *t =new Node(-1);
	if(t)
	{
		return false;
	}
	return true;
}

int Queue::display()
{
	int size=0;
	Node *p=front;
	
	if(!p)
	{
		cout<<"queue is empty"<<endl;
		return size;
	}
	else
	{
		while(p)
		{
			cout<<p->data<<" ";
			p=p->next;
			size++;
		}
		cout<<endl;
		return size;
	}
}

int main()
{
	Queue q;
	q.enqueue(10);
	q.enqueue(20);
//	q.enqueue(30);
//	q.enqueue(40);
//	q.enqueue(50);
//	q.enqueue(60);
//	q.enqueue(70);
//	q.enqueue(80);
//	q.enqueue(90);
//	q.enqueue(100);
//	q.enqueue(110);
//	q.enqueue(120);
//	q.enqueue(130);
//	q.enqueue(140);
//	q.enqueue(150);
//	q.enqueue(160);


	
	cout<<q.dequeue()<<endl;
	cout<<q.dequeue()<<endl;
	
	cout<<q.frontvalue()<<endl;
	cout<<q.rearvalue()<<endl;
	
	cout<<q.isempty()<<endl;
	cout<<q.isfull()<<endl;
	
	cout<<q.display();

}
