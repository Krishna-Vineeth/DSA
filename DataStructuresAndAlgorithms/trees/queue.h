class Node
{
	private:
		int data;
		Node *lchild;
		Node *rchild;
	public:
		friend class Queue;
		friend class Tree;
		friend class Stack;
		Node(int x)
		{
			data=x;
			lchild=rchild=NULL;
		}
};

class Queue
{
	private:
		int front,rear,size,capacity;
		Node **Q;
	
	public:
		Queue()
		{
			front=0;
			rear=-1;
			size=0;
			capacity=5;
			Q=new Node* [capacity];
		}
		Queue(int capacity)
		{
			front=0;
			rear=-1;
			size=0;
			this->capacity=capacity;
			Q=new Node* [this->capacity];
		}
		void enqueue(Node * x);
		Node * dequeue();
		bool isempty();
};

void Queue::enqueue(Node * x)
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

Node * Queue::dequeue()
{
	Node *x=NULL;
	
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

bool Queue::isempty()
{
	if(size==0)
	{
		return true;
	}
	return false;
}
