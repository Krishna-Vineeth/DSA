
class Stack
{
	private:
		int size;
		int top;
		Node **S;
		
	public:
		friend class Tree;
		
		Stack(int size)
		{
			this->size=size;
			top=-1;
			S=new Node *[this->size];	
		}
		void push(Node * x);
		Node *pop();
		bool isempty();
		bool isfull();
		Node *peek();
};

void Stack::push(Node * x) 
{
	if(top==size-1)
	{
		cout<<"stack overflow"<<endl;
	}
	else
	{
		top++;
		S[top]=x;
	}
}

Node * Stack::pop()
{
	Node *x=NULL;
	if(top==-1)
	{
		cout<<"stack underflow"<<endl;
	}
	else
	{
		x=S[top--];
	}
	return x;
}

Node * Stack::peek()
{
    if (top==-1)
        return NULL;
    return S[top];
}

bool Stack::isempty()
{
	if(top==-1)
	{
		return true;
	}
	
	return false;
	
}

bool Stack::isfull()
{
	if(top==size-1)
	{
		return true;
	}
	
	return false;
	// return st.top==st.size-1;
}

