#include<stdio.h>
int sum(int n)
{
	if(n!=0)
	{
		return n+sum(n-1);	
	}	
	else
	{
		return n;
	}
}
int main()
{
	int n,x;
	printf("enter n value:\n");
	scanf("%d",&n);
	
	x=sum(n);
	printf("sum=%d",x);
	return 0;
}