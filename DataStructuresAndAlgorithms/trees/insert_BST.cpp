#include<iostream>
using namespace std;

class Node
{
	
	public:
		int data;
		Node * lchild;
		Node * rchild;
		friend class Tree;
		Node(int x)
		{
			data=x;
			lchild=rchild=NULL;
		}
			
};

class Tree
{
	public:
		Node * root;
		friend class Node;
		Tree()
		{
			root=NULL;
		}
		void insert(int x);
		Node* Rinsert(Node *p,int x);
		Node* getRoot(){ return root; }
		void inorder(Node *p);
		Node *search(int x);
		Node *Delete(Node *p,int x);
		int height(Node *p);
		Node *inpre(Node *p);
		Node *insucc(Node *p);
};

void Tree::insert(int x)
{
	Node *t=root;
	Node *r,*p;
	
	if(root==NULL)
	{
		p=new Node(x);
		root=p;
		return;
	}
	
	while(t)
	{
		r=t;
		
		if(x<t->data)
		{
			t=t->lchild;
		}
		else if(x>t->data)
		{
			t=t->rchild;
		}
		else
		{
			return;
		}
	}
	
	p=new Node(x);
	if(x<r->data)
	{
		r->lchild=p;
	}
	else
	{
		r->rchild=p;
	}
}

Node * Tree::Rinsert(Node *p,int x)
{
	Node *t=NULL;
	
	if(p==NULL)
	{
		t=new Node(x);
		return t;
	}
	
	if(x<p->data)
	{
		p->lchild=Rinsert(p->lchild,x);
	}
	else if(x>p->data)
	{
		p->rchild=Rinsert(p->rchild,x);
	}
	else
	{
		return p;
	}
}

int Tree::height(Node *p)
{
	int x,y;
	if(p==NULL)
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

Node * Tree::inpre(Node *p)
{
	while(p && p->rchild!=NULL)
	{
		p=p->rchild;
	}
	return p;
}

Node * Tree::insucc(Node *p)
{
	while(p && p->lchild!=NULL)
	{
		p=p->lchild;
	}
	return p;
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

Node * Tree::Delete(Node *p,int x)
{
	Node *q;
	if(p==NULL)
	{
		return NULL;
	}
	if(p->lchild==NULL && p->rchild==NULL)
	{
		if(p==root)
		{
			root=NULL;
		}
		delete(p);
		return NULL;
	}
	if(x < p->data)
	{
		p->lchild=Delete(p->lchild,x);
	}
	else if(x > p->data)
	{
		p->rchild=Delete(p->rchild,x);
	}
	else
	{
		if(height(p->lchild)>height(p->rchild))
		{
			q=inpre(p->lchild);
			p->data=q->data;
			p->lchild=Delete(p->lchild,q->data);
		}
		else
		{
			q=insucc(p->rchild);
			p->data=q->data;
			p->rchild=Delete(p->rchild,q->data);
		}
	}
	return p;
}

Node * Tree::search(int x)
{
	Node *t=root;
	
	while(t)
	{
		if(x==t->data)
		{
			return t;
		}
		else if(x<t->data)
		{
			t=t->lchild;
		}
		else
		{
			t=t->rchild;
		}
	}
	return NULL;
}

int main()
{
	Tree tree;
	
	tree.root=tree.Rinsert(tree.root,50);
	tree.Rinsert(tree.root,5);
	tree.Rinsert(tree.root,-7);
	tree.Rinsert(tree.root,90);
	tree.Rinsert(tree.root,2);
	tree.Rinsert(tree.root,0);
	tree.Rinsert(tree.root,10);
	tree.Rinsert(tree.root,100);
	
	tree.Delete(tree.root,50);
	tree.inorder(tree.getRoot());
	cout<<endl;
	
	Node *temp;
	
	temp=tree.search(50);
	
	if(temp)
	{
		cout<<"element "<<temp->data<<" is found"<<endl;
	}
	else
	{
		cout<<"element is not found"<<endl;
	}
}
