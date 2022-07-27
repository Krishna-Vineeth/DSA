#include<iostream>
using namespace std;

class Node
{
	
	public:
		int data;
		int height;
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
		void inorder(Node *p);
		Node* Rinsert(Node *p,int x);
		int Nodeheight(Node *p);
		int BalanceFactor(Node *p);
		Node * LLrotation(Node *p);
		Node * LRrotation(Node *p);
		Node * RRrotation(Node *p);
		Node * RLrotation(Node *p);
		Node* getRoot(){ return root; }
};

int Tree::Nodeheight(Node *p)
{
	int hl,hr;
	hl = p && p->lchild ? p->lchild->height:0;
	hr = p && p->rchild ? p->rchild->height:0;
	
	return hl > hr ? hl+1:hr+1;
}

int Tree::BalanceFactor(Node *p)
{
	int hl,hr;
	hl=p && p->lchild ? p->lchild->height:0;
	hr=p && p->rchild ? p->rchild->height:0;
	
	return hl-hr;
}

Node * Tree::LLrotation(Node *p)
{
	Node *pl = p->lchild;
	Node *plr = pl->rchild;
	
	pl->rchild=p;
	p->lchild=plr;
	p->height=Nodeheight(p);
	pl->height=Nodeheight(pl);
	
	if(root==p)
	{
		root=pl;
	}
	return pl;
}

Node * Tree::LRrotation(Node *p)
{
	Node* pl = p->lchild;
    Node* plr = pl->rchild;
 
    pl->rchild = plr->lchild;
    p->lchild = plr->rchild;
 
    plr->lchild = pl;
    plr->rchild = p;
 
    // Update height
    pl->height = Nodeheight(pl);
    p->height = Nodeheight(p);
    plr->height = Nodeheight(plr);
 
    // Update root
    if (p == root){
        root = plr;
    }
    return plr;
}

Node * Tree::RRrotation(Node *p)
{
	Node* pr = p->rchild;
    Node* prl = pr->lchild;
 
    pr->lchild = p;
    p->rchild = prl;
 
    // Update height
    p->height = Nodeheight(p);
    pr->height = Nodeheight(pr);
 
    // Update root
    if (root == p){
        root = pr;
    }
    return pr;
}

Node * Tree::RLrotation(Node *p)
{
	Node* pr = p->rchild;
    Node* prl = pr->lchild;
 
    pr->lchild = prl->rchild;
    p->rchild = prl->lchild;
 
    prl->rchild = pr;
    prl->lchild = p;
 
    // Update height
    pr->height = Nodeheight(pr);
    p->height = Nodeheight(p);
    prl->height = Nodeheight(prl);
 
    // Update root
    if (root == p){
        root = prl;
    }
    return prl;
}

Node * Tree::Rinsert(Node *p,int x)
{
	Node *t=NULL;
	
	if(p==NULL)
	{
		t=new Node(x);
		t->height=1;
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
	
	p->height=Nodeheight(p);
		
		if(BalanceFactor(p)==2 && BalanceFactor(p->lchild)==1)
		{
			return LLrotation(p);
		}
		else if(BalanceFactor(p)==2 && BalanceFactor(p->lchild)==-1)
		{
			return LRrotation(p);
		}
		else if(BalanceFactor(p)==-2 && BalanceFactor(p->lchild)==-1)
		{
			return RRrotation(p);
		}
		else if(BalanceFactor(p)==-2 && BalanceFactor(p->lchild)==1)
		{
			return RLrotation(p);
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

int main()
{
	Tree tree;
	
	// LL Rotation
    tree.root = tree.Rinsert(tree.root, 30);
    tree.root = tree.Rinsert(tree.root, 20);
    tree.root = tree.Rinsert(tree.root, 10);
 
    tree.inorder(tree.getRoot());
    cout << endl;
 
    // LR Rotation
    Tree tree2;
    tree2.root = tree2.Rinsert(tree2.root, 50);
    tree2.root = tree2.Rinsert(tree2.root, 10);
    tree2.root = tree2.Rinsert(tree2.root, 20);
 	
 	tree2.inorder(tree2.getRoot());
 	cout << endl;
 	
 	// RL Rotation
    Tree tree3;
    tree3.root = tree3.Rinsert(tree3.root, 20);
    tree3.root = tree3.Rinsert(tree3.root, 50);
    tree3.root = tree3.Rinsert(tree3.root, 30);
    
    tree3.inorder(tree3.getRoot());
    cout << endl;
 
}


