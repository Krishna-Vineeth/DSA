// for upper triangular matrix just replace i in j or j in i

/*
#include<stdio.h>
#include<stdlib.h>
struct Matrix
{
	int n;
	int A[10];   // *A
};

void set(struct Matrix *m,int i,int j,int x)
{
	if(i>=j)
	{
		//m->A[i*(i-1)/2+(j-1)]=x;                            // row major representation
		m->A[m->n*(j-1)+(j-2)*(j-1)/2+i-j]=x;                 // column major representation
	}
}
int get(struct Matrix m,int i,int j)
{
	if(i>=j)
	{
		//return m.A[i*(i-1)/2+(j-1)];						    // row major representation
		return m.A[m.n*(j-1)+(j-2)*(j-1)/2+i-j];				// column major representation
	}
	else
	{
		return 0;
	}
}
void display(struct Matrix m)
{
	int i,j;
	for(i=1;i<=m.n;i++)
	{
		for(j=1;j<=m.n;j++)
		{
			if(i>=j)
			{
				//printf("%d ",m.A[i*(i-1)/2+(j-1)]);				// row major representation
				printf("%d ",m.A[m.n*(j-1)+(j-2)*(j-1)/2+i-j]); // column major representaion
			}
			else
			{
				printf("0 ");
			}
		}
		printf("\n");
	}
}*/
/*
int main()
{
	struct Matrix m;
	m.n=3;

	set(&m,1,1,1);
	set(&m,2,1,2);
	set(&m,2,2,3);
	set(&m,3,1,4);
	set(&m,3,2,5);
	set(&m,3,3,6);
	printf("%d \n",get(m,3,3));
	display(m);
	
/*	struct Matrix m;
	int i,j,x;
	
	printf("enter dimension of matrix\n");
	scanf("%d",&m.n);
	
	m.A=(int *)malloc(m.n*(m.n-1)/2*sizeof(int));  // to create an array of size that is equal to the number of non-zero elements
	
	printf("enter all elements:\n");
	for(i=1;i<=m.n;i++)
	{
		for(j=1;j<=m.n;j++)
		{
			scanf("%d",&x);
			set(&m,i,j,x);
		}
	}
	printf("\n \n");
	display(m);

}
*/

#include<iostream>
using namespace std;

class Lowertri
{
	private:
		int n;
		int *A;
	public:
		Lowertri()
		{
			n=2;
			A=new int[n*(n+1)/2];
		}
		Lowertri(int n)
		{
			this->n=n;
			A=new int[n*(n+1)/2];
		}
		~Lowertri()
		{
			delete []A;
		}
		void set(int i,int j,int x);
		int get(int i,int j);
		void display();
};

void Lowertri::set(int i,int j, int x)
{
	if(i>=j)
	{
		//A[i*(i-1)/2+j-1]=x;
		A[n*(j-1)+(j-2)*(j-1)/2+i-j]=x;
	}
}
int Lowertri::get(int i,int j)
{
	if(i>=j)
	{
		//return A[i*(i-1)/2+j-1];
		return A[n*(j-1)+(j-2)*(j-1)/2+i-j];
	}
	else
	{
		return 0;
	}
}
void Lowertri::display()
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(i>=j)
			{
				//cout<<A[i*(i-1)/2+j-1]<<" ";
				cout<<A[n*(j-1)+(j-2)*(j-1)/2+i-j]<<" ";
			}
			else
			{
				cout<<"0 ";
			}
		}
		cout<<endl;
	}
}
int main()
{
	int n;
	cout<<"enter dimension"<<endl;
	cin>>n;
	
	Lowertri lt(n);
	
	int x;
	cout<<"enter array elements"<<endl;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>x;
			lt.set(i,j,x);
		}
	}
	lt.display();	
}
