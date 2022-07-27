#include <stdio.h>
int main()
{
	int a[100],i,n;
	
	printf("enter a value for n:\n");
	scanf("%d",&n);
	
	printf("enter array values:\n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);	
	}	
	
	printf("the array is:\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}	
	
	printf("reverse order:\n");
	
	for(i=n-1;i>=0;i--)
	{
		printf("%d\n",a[i]);
	}
}