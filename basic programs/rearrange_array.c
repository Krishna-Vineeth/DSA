#include<stdio.h>
int main()
{
	int a[50],b[50],i,j,k,n,temp;
	printf("enter number of elements: \n");
	scanf("%d",&n);
	printf("enter array values:\n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("after sorting:\n");
	for (i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
	k=0;
	for(i=0,j=n-1;i<=j;i++,j--)
	{
		b[k]=a[i];
		k++;
		b[k]=a[j];
		k++;
	}
	for (i=0;i<n;i++)
	{
		a[i]=b[i];
	}
	printf("rearranged array:\n");
	for (i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
		
}
