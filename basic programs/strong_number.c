#include<stdio.h>
int main()
{
	int num,rem,sum=0,x,i;
	printf("enter the number:\n");
	scanf("%d",&num);
	x=num;
	
	while(num>0)
	{
		rem=num%10;
		int fact=1;
		for(i=1;i<=rem;i++)
		{
			fact=fact*i;
		}
		sum=sum+fact;
		num=num/10;
	}
	if(sum==x)
	{
		printf("\n....the number %d is a strong number....",x);
	}
	else
	{
		printf("\n....the number %d is not a strong number....",x);
	}
	return 0;
}