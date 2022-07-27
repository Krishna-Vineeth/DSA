#include <stdio.h>

int main ()
{
	int a[50],i,n;
	
	printf("enter a value for n:\n");
	scanf("%d",&n);
	
	printf("enter the array values:\n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("positive values are:\n");
	
	for(i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			printf("positive:%d\n",a[i]);
		}		
		else
		{
			printf("negative:%d\n",a[i]);
		}
	}
}