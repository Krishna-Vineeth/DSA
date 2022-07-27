// 9921004803 - krishna vineeth
#include<stdio.h>
int fact(int n)
{
	if(n==0)
	{
		return 1;
	}
	else if(n==1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}
int main()
{
	int num;
	printf("enter a number :\n");
	scanf("%d",&num);
	printf("the factorial value of %d is %d",num,fact(num));
	return 0;
}