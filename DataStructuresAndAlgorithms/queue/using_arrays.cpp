#include<iostream>
using namespace std;

class Queue
{
	private:
		int front,rear,size,capacity;
		int *Q;
		
	public:
		Queue()
		{
			front=0;
			rear=-1;
			size=0;
			capacity=5;
			Q=new int[capacity];
		}
		Queue(int capacity)
		{
			front=0;
			rear=-1;
			size=0;
			this->capacity=capacity;
			Q=new int[this->capacity];
		}
		void enqueue(int x);
		int dequeue();
		void display();
		bool isempty();
		bool isfull();
		int frontvalue();
		int rearvalue();
		int Size();
};

void Queue::enqueue(int x)
{
	
	if (size==capacity)
	{
		cout<<"overflow"<<endl;
	}
	else
	{
		Q[++rear]=x;
		size++;
//		if(size==1)
//		{
//			front++;
//		}
	}
}

int Queue::dequeue()
{
	int x=-1;
	
	if(size==0)
	{
		cout<<"underflow"<<endl;
	}
	else
	{
		x=Q[front];
		front++;
		size--;
	}
	
	if(size==0)
	{
		rear=-1;
		front=0;
	}
	return x;
}

int Queue::Size()
{
	return size;
}

void Queue::display()
{
	if(size==0)
	{
		cout<<"stack is empty"<<endl;
	}
	else
	{
		for(int i=front;i<=rear;i++)
		{
			cout<<Q[i]<<" ";
		}	
	}
	
	cout<<endl;
}

bool Queue::isempty()
{
	if(size==0)
	{
		return true;
	}
	return false;
}

bool Queue::isfull()
{
	if(size==capacity)
	{
		return true;
	}
	return false;
}

int Queue::frontvalue()
{
	if(size==0)
	{
		return -1;
	}
	return Q[front];
}

int Queue::rearvalue()
{
	if(size==0)
	{
		return -1;
	}
	return Q[rear];
}

int main()
{
	Queue q(5);
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	q.enqueue(50);
//	q.enqueue(60);
//	cout<<q.Size()<<endl;
	q.display();
	cout<<q.dequeue()<<endl;
	cout<<q.dequeue()<<endl;
//	q.enqueue(60);
//	cout<<q.Size()<<endl;
	cout<<q.dequeue()<<endl;
	cout<<q.dequeue()<<endl;
	cout<<q.dequeue()<<endl;
	q.enqueue(1000);
	q.enqueue(2000);
//	q.enqueue(3000);
//	q.enqueue(4000);
//	q.enqueue(5000);
//	q.dequeue();
//	q.dequeue();
//	q.dequeue();
//	q.dequeue();
//	q.dequeue();
//	q.dequeue();
	cout<<q.Size()<<endl;
//	q.dequeue();
	cout<<q.frontvalue()<<endl;
	cout<<q.rearvalue()<<endl;
	cout<<q.isempty()<<endl;
	cout<<q.isfull()<<endl;
	q.display();
}
