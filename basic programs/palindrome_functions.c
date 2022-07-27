// 9921004803 - krishna vineeth
#include<stdio.h>
void palindrome(int num)
{
	int rem,sum=0,x;
	x=num;
	while(num>0)
	{
		rem=num%10;
		sum=sum*10+rem;
		num=num/10;
	}
	
	printf("the reversed number is : %d\n",sum);
	
	if(x==sum)
	{
		printf("the number %d is a palindrome...\n",x);
	}
	else
	{
		printf("the number %d is not a palindrome...\n",x);
	}
}

int main()
{
	int num;
	printf("enter a number:\n");
	scanf("%d",&num);
	
	palindrome(num);
	return 0;
}