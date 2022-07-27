#include<stdio.h>

int fact(int num)
{
	int fact=1;
	for(int i=num;i>1;i--)
	{
		fact*=i;
	}
	return fact;
}



int main()
{
	int n,i,j;
	
	printf("enter the value for n:\n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d\t",fact(i)/(fact(j)*fact(i-j)));
		}
	printf("\n");
	}
}