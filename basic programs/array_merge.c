#include<stdio.h>

int main()
{
	int i,j,n,m,a[50],b[50],c[100];
	
	printf("enter size of array a:\n");
	scanf("%d",&n);
	
	printf("enter size of array b:\n");
	scanf("%d",&m);
	
	
	printf("enter values of array a:\n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		c[i]=a[i];
	}
	
	j=i;
	
	printf("enter values of array b:\n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
		c[j]=b[i];
		j++;
	}
	
	
	printf("the array values of a are:\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	
	printf("\nthe array values of b are:\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d\t",b[i]);
	}


	printf("\nmerged array is:\n");
	
	for(i=0;i<j;i++)
	{
		printf("%d\t",c[i]);
	}
	
	return 0;

}