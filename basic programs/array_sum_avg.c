#include <stdio.h>

int main()
{
	int a[50],i,n,sum=0;
	float average;
	
	printf("enter size of array:\n");
	scanf("%d",&n);
	
	printf("enter array values:\n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("the array values are:\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	
	printf("\nthe sum of array values is: %d",sum);
	
	average=sum/n;
	
	printf("\nthe average of array values is: %f",average);
}