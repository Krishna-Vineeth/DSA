#include<stdio.h>
/*
int main()									// only the element (sorted) 
{
	int A[20],i,n,last_duplicate;
	
	printf("enter size of the array:\n");
	scanf("%d",&n);
	printf("enter array values:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	
	last_duplicate=123456789;
	
	for(i=0;i<n;i++)
	{
		if(A[i]==A[i+1] && A[i]!=last_duplicate)
		{
			printf("%d ",A[i]);
			last_duplicate=A[i];
		}
	}
}
*/

/*
int main()									// duplicate element and its occurence (sorted)
{
	int A[20],i,n,j;
	
	printf("enter size of the array:\n");
	scanf("%d",&n);
	printf("enter array values:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if(A[i]==A[i+1])
		{
			j=i;
			while(A[i]==A[j])
			{
				j++;
			}
			printf("\n%d - %d times  ",A[i],j-i);
			i=j-1;
		}
	}
}
*/

							
int main()										// duplicate element and its occurence (sorted & unsorted) order=O(n^2)
{
	int A[20],i,n,j,count;
	
	printf("enter size of the array:\n");
	scanf("%d",&n);
	printf("enter array values:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	for(i=0;i<n-1;i++)
	{
		count=1;
		if(A[i]!=-1)
		{
			for(j=i+1;j<n;j++)
			{
				if(A[i]==A[j])
				{
					count++;
					A[j]=-1;
				}
			}
			if(count>1)
			{
				printf("\n%d - %d times",A[i],count);
			}
		}
	}
}
/*
int main()                                // duplicate elements sorted and unsorted  order = O(n)
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
	
	for(i=l;i<=h;i++)
	{
		if(H[i]>1)
		{
			printf("\n%d - %d times  ",i,H[i]);
		}
	}
	
}*/


