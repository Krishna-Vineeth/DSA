#include<stdio.h>

int main()
{
	int a[100],i,n;
	
	printf("enter a value for n:\n");
	scanf("%d",&n);

	printf("enter the array values...\n");

	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("the array values are:\n");

	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	
	printf("positive values are:\n");
	for(i=0;i<n;i++)
	{
		if(a[i]>0){
		
		printf("%d\n",a[i]);
		
	    }
	}
	
	printf("negative values are:\n");
	for(i=0;i<n;i++)
	{
		if(a[i]<0){
		
		printf("%d\n",a[i]);
		
     	}
    }
}