// 9921004803 - krishna vineeth
#include<stdio.h>
void factorial(int num)
{
	int i,x,fact=1;
	x=num;
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	printf("the factorial value of %d is : %d",x,fact);
}
int main()
{
	int num;
	printf("enter a number : \n");
	scanf("%d",&num);
	
	factorial(num);
	return 0;
}