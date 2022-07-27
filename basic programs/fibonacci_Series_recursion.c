// 9921004803 - krishna vineeth
#include<stdio.h>
int fib(int n)
{
	if(n==0)
	{
		return 0;
	}
	else if(n==1)
	{
		return 1;
	}
	else
	{
		return fib(n-1)+fib(n-2);
	}
}
int main()
{
	int num,x;
	printf("enter a number :\n");
	scanf("%d",&num);
	for(int i=0;i<num;i++)
	{
		x=fib(i);
		printf("%d ",x);
	}
	return 0;
}
