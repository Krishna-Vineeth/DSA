#include<iostream>
using namespace std;
#include "queue.h"
#include "stack.h"
class Tree
{
	public:
		Node *root;
		Tree()
		{
			root=NULL;
		}
		void createTree();
		void preorder()
		{
			preorder(root);
		}
		void preorder(Node *p);
		void postorder(Node *p);
		void inorder(Node *p);
		void iter_preorder(Node *p);
		void iter_postorder(Node *p);
		void iter_inorder(Node *p);
		void levelorder(Node *p);
		int height(Node *p);
		int count(Node *p);
		int countvalues(Node *p);
};

void Tree::createTree()
{
	Node *p,*t;
	int x;
	Queue q(100);
	
	cout<<"enter root value: "<<endl;
	cin>>x;
	
	root=new Node(x);
	
	q.enqueue(root);
	
	while(!q.isempty())
	{
		p=q.dequeue();
		cout<<"enter left child of "<<p->data<<" "<<endl;
		cin>>x;
		if(x!=-1)
		{
			t=new Node(x);
			p->lchild=t;
			q.enqueue(t);
		}
		cout<<"enter right child of "<<p->data<<" "<<endl;
		cin>>x;
		if(x!=-1)
		{
			t=new Node(x);
			p->rchild=t;
			q.enqueue(t);
		}
	}
}

void Tree::preorder(Node *p)
{
	if(p)
	{
		cout<<p->data<<" ";
		preorder(p->lchild);
		preorder(p->rchild);
	}
}

void Tree::inorder(Node *p)
{
	if(p)
	{
		inorder(p->lchild);
		cout<<p->data<<" ";
		inorder(p->rchild);
	}
}

void Tree::postorder(Node *p)
{
	if(p)
	{
		postorder(p->lchild);
		postorder(p->rchild);
		cout<<p->data<<" ";
	}	
}

void Tree::iter_preorder(Node *p)
{
	Stack st(100);
	while(p || !st.isempty())
	{
		if(p)
		{
			cout<<p->data<<" ";
			st.push(p);
			p=p->lchild;
		}
		else
		{
			p=st.pop();
			p=p->rchild;
		}
	}
}

void Tree::iter_inorder(Node *p)
{	Stack st(100);
	while(p || !st.isempty())
	{
		if(p)
		{
			st.push(p);
			p=p->lchild;
		}
		else
		{
			p=st.pop();
			cout<<p->data<<" ";
			p=p->rchild;
		}
	}
}

void Tree::iter_postorder(Node *p)
{	
	if (p == NULL)
        return;
 
    Stack st(100);
    do {
        while (p) {
            if (p->rchild)
                st.push(p->rchild);
            st.push(p);
            p = p->lchild;
        }

        p = st.pop();
        if (p->rchild && st.peek() == p->rchild) {
            st.pop(); 
            st.push(p); 
            p = p->rchild; 
        }
        else
        {
            cout<<p->data<<" ";
            p = NULL;
        }
    } while (!st.isempty());
}

void Tree::levelorder(Node *p)
{
	Queue q(100);
	cout<<p->data<<" ";
	q.enqueue(p);
	
	while(!q.isempty())
	{
		p=q.dequeue();
		if(p->lchild)
		{
			cout<<p->lchild->data<<" ";
			q.enqueue(p->lchild);
		}
		if(p->rchild)
		{
			cout<<p->rchild->data<<" ";
			q.enqueue(p->rchild);
		}	
	}
}

int Tree::height(Node *p)
{
	int x=0,y=0;
	
	if(p==0)
	{
		return 0;
	}
	x=height(p->lchild);
	y=height(p->rchild);
	
	if(x>y)
	{
		return x+1;
	}
	else
	{
		return y+1;
	}
}

int Tree::count(Node *p)
{
	if(p)
	{
		return count(p->lchild)+count(p->rchild)+1;   
	}
	return 0;
}

int Tree::countvalues(Node *p)
{
	if(p)
	{
		return countvalues(p->lchild)+countvalues(p->rchild)+p->data;   
	}
	return 0;
}

int main()
{
	Tree tree;
	tree.createTree();
//	cout<<endl<<"preorder ";
//	tree.preorder();
	cout<<endl<<"postorder ";
	tree.postorder(tree.root);
//	cout<<endl<<"inorder ";
//	tree.inorder(tree.root);
//	cout<<endl<<"levelorder ";
//	tree.levelorder(tree.root);
//	cout<<endl<<tree.height(tree.root);
//	cout<<endl<<"iterative preorder ";
//	tree.iter_preorder(tree.root);
//	cout<<endl<<"iterative inorder ";
//	tree.iter_inorder(tree.root);
	cout<<endl<<"iterative postorder ";
	tree.iter_postorder(tree.root);
	cout<<endl<<tree.countvalues(tree.root);
}
