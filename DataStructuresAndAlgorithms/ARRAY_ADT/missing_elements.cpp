#include<stdio.h>

/*
int main()									// single element (sorted)   order = O(n)
{
	int A[10]={1,2,3,4,5,6,7,8,9};
	
	int sum,n_sum,i,n;
	
	n=sizeof(A)/sizeof(int);
	
	for(i=0;i<n;i++)
	{
		sum+=A[i];
	}
	
	n_sum=(n/2)*(n+1);
	
	printf("%d",n_sum-sum);
}
*/


/*
int main()									// single element (sorted)   order = O(n)
{
	int A[10]={20,21,23,24,25,26,27,28,29};
	
	int diff,i;
	
	diff = A[0];//diff=1;
	
	//for(i=0;i<sizeof(A)/sizeof(int)-1;i++)
	for(i=0;i<sizeof(A)/sizeof(int);i++)
	{
	//	if(A[i+1]-A[i]!=diff)
	if(A[i]-i!=diff)
		{
			printf("%d",i+diff);
			//printf("%d ",diff+A[i]);
			break;
		}
		
	}
	
}
*/

/*									// method - 1
int main()								// multiple elements (sorted)   order = greater than the method 2 [nearly=O(n^2)]
{
	int A[5]={7,10,13,22,25};
	
	int diff,i;
	
	diff = 3;//diff=A[0];
	
//	for(i=0;i<sizeof(A)/sizeof(int);i++)
	for(i=0;i<sizeof(A)/sizeof(int)-1;i++)
	{
		if(A[i+1]-A[i]!=diff)
		{
			while(diff<A[i+1]-A[i])
			{
				printf("%d ",diff+A[i]);
				//printf("%d ",i+diff);
				diff = diff + 3;//diff++;
			}
		}
	}
}*/

/									   // method - 2
int main()                                // multiple elements (sorted & unsorted)  order = O(n)
{
	int A[20],H[20],n,max,min,i;
	printf("enter size of the array:\n");
	scanf("%d",&n);
	printf("enter array values:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	max=A[0];
	min=A[0];
	for(i=0;i<n;i++)
	{
		if(A[i]>max)
		{
			max=A[i];
		}
	}
	for(i=0;i<n;i++)
	{
		if(A[i]<min)
		{
			min=A[i];
		}
	}
	
	for(i=0;i<=max;i++)
	{
		H[i]=0;
	}
	
	for(i=0;i<n;i++)
	{
		H[A[i]]++;
	}
	int l,h;
	l=min;
	h=max;
	printf("the missing elements are :\n");
	for(i=l;i<=h;i++)
	{
		if(H[i]==0)
		{
			printf("%d ",i);
		}
	}
	
}

