// 9921004803 - krishna vineeth
#include<stdio.h>
void digits(int num)
{
	int rem;
	int last_digit=num%10;
	printf("last digit is : %d \n",last_digit);
	
	while(num>0)
	{
		rem=num%10;
		num=num/10;
	}
	printf("first digit is : %d \n",rem);
	
}
int main()
{
	int num;
	printf("enter a number :\n");
	scanf("%d",&num);
	digits(num);
	return 0;
}