#include<stdio.h>
int main()
{
	int a[15],i,j,n,k,temp;
	printf("enter size of array:\n");
	scanf("%d",&n);
	printf("enter array values :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
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
	printf("enter a value for k :\n");
	scanf("%d",&k);
	printf("%dth smallest term is : %d ",k,a[k-1]);
	return 0;
}
