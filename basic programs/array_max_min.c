/* sorted method

#include<stdio.h>
int main()
{
	int a[100],i,n,min,max;
	
	printf("enter value for n:\n");
	scanf("%d",&n);
	
	printf("enter the array values:\n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	min=a[0];
	max=a[n-1];
	
	printf("\nthe array values are:\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	

	printf("\nminimum value of the array is : %d",min);
	
	
	printf("\nmaximum value of the array is : %d",max);
	
}*/


// unsorted method

#include<stdio.h>
int main()
{
	int a[100],i,n,min,max;
	
	printf("enter value for n:\n");
	scanf("%d",&n);
	
	printf("enter the array values:\n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	min=a[0];
	max=a[n-1];
	
	printf("\nthe array values are:\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];	
		}
	}
	
	printf("\nminimum value of the array is : %d",min);
	
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];	
		}
	}
	
	printf("\nmaximum value of the array is : %d",max);
	
}