#include<stdio.h>
/*
int main()								// sorted and unsorted        order = O(n^2)
{
	int A[20],n,i,j,k;
	
	printf("enter size of the array:\n");
	scanf("%d",&n);
	printf("enter array values:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("enter a value for k:\n");
	scanf("%d",&k);
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(A[i]+A[j]==k)
			{
				printf("%d + %d = %d ",A[i],A[j],k);
			}
		}
	}
}
*/
/*
int main()								// sorted and unsorted          order = O(n)
{
	int A[20],H[20],i,k,n,max;
	
	printf("enter size of the array:\n");
	scanf("%d",&n);
	
	printf("enter array values:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	max=A[0];
	printf("enter a value for k :\n");
	scanf("%d",&k);
	
	for(i=0;i<n;i++)
	{
		if(A[i]>max)
		{
			max=A[i];
		}
	}
	
	for(i=0;i<=max;i++)
	{
		H[i]=0;
	}
	
	for(i=0;i<n;i++)
	{
		if(H[k-A[i]]!=0)
		{
			printf("%d + %d = %d ",A[i],k-A[i],k);
		}
		H[A[i]]++;
	}
}*/

int main()								// sorted          order = O(n)
{
	int A[20],i,j,k,n;
	printf("enter size of the array:\n");
	scanf("%d",&n);
	printf("enter array values:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("enter a value for k:\n");
	scanf("%d",&k);
	i=0;
	j=n-1;
	while(i<j)                          //for(i=0,j=n-1;i<j;)
	{
		if (A[i]+A[j]==k)
		{
			printf("%d + %d = %d ",A[i],A[j],k);
			i++;
			j--;
		}
		else if(A[i]+A[j]<k)
		{
			i++;
		}
		else
		{
			j--;
		}
	}
}
