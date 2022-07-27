// 9921004803 - krishna vineeth
#include<stdio.h>
int main()
{
	int num,i,x,rem,fact,sum=0;
	printf("enter the number:\n");
	scanf("%d",&num);
	x=num;
	while(num>0)
	{
		rem=num%10;
		fact=1;
		for(i=1;i<=rem;i++)
		{
			fact=fact*i;
		}
		sum=sum+fact;
		num=num/10;
	}
	if(x==sum)
	{
		printf("the number %d is strong number...",x);
	}
	else
	{
		printf("the number %d is not a strong number...",x);
	}
	return 0;
}