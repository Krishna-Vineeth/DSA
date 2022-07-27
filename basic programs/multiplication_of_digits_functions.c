// 9921004803 - krishna vineeth
#include<stdio.h>
void mul_of_digits(int num)
{
	int rem,mul=1;
	
	while(num>0)
	{
		rem=num%10;
		mul=mul*rem;
		num=num/10;
	}
	printf("multiplication of the digits is : %d ",mul);
}
int main()
{
	int num;
	printf("enter a number :\n");
	scanf("%d",&num);
	mul_of_digits(num);
	return 0;
}