#include<stdio.h>
int fact(int n);	//decalration
int main()
{
	int n,x;
	printf("Enter the number \t");
	scanf("%d",&n);
	x=fact(n);
	printf("Factorial of a given number is %d",x);
	return 0;
}
int fact(int n)
{
	if(n==0)
		return 1;
	else if (n==1)
		return 1;
	else
		return n*fact(n-1);
}
