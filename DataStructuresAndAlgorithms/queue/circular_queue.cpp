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
			Q=new int [capacity];
		}
		Queue(int capacity)
		{
			front=0;
			rear=-1;
			size=0;
			this->capacity=capacity;
			Q=new int [this->capacity];
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
	if(size==capacity)
	{
		cout<<"overflow"<<endl;
	}
	else
	{
		rear=(rear+1)%capacity;
		Q[rear]=x;
		size++;
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
		front=(front+1)%capacity;
		size--;
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
		int i=front;
		
		do
		{
			cout<<Q[i]<<" ";
			i=(i+1)%capacity;
		}while(i!=(rear+1)%capacity);	
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
	Queue q(10);
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	q.enqueue(4);
	q.enqueue(5);
//	q.enqueue(6);
	q.display();
	cout<<q.dequeue()<<endl;
	cout<<q.dequeue()<<endl;
	cout<<q.dequeue()<<endl;
	cout<<q.dequeue()<<endl;
	cout<<q.dequeue()<<endl;
//	cout<<q.dequeue()<<endl;
	q.display();
	
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	q.enqueue(50);
	q.display();
	cout<<q.dequeue()<<endl;
	cout<<q.dequeue()<<endl;
	cout<<q.dequeue()<<endl;
	q.enqueue(60);
	q.enqueue(70);
	q.enqueue(80);
//	q.enqueue(90);
//	q.enqueue(100);
//	q.enqueue(110);
	cout<<q.Size()<<endl;
	q.display();
//	cout<<q.dequeue()<<endl;
//	cout<<q.dequeue()<<endl;
//	cout<<q.dequeue()<<endl;
//	cout<<q.dequeue()<<endl;
//	cout<<q.dequeue()<<endl;

	cout<<q.frontvalue()<<endl;
	cout<<q.rearvalue()<<endl;
	cout<<q.isempty()<<endl;
	cout<<q.isfull()<<endl;
	
}
