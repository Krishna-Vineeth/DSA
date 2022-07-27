#include<stdio.h>
int main()
{
	int rem,sum=0,num;
	printf("enter a number :\n");
	scanf("%d",&num);
	
	while (num>0)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	printf("sum of digits is :%d",sum);
	return 0;
}