// 9921004803 - krishna vineeth
#include<stdio.h>
int main()
{
	int num,rem,rev,x,y,square_1,square_2;
	printf("enter a number:\n");
	scanf("%d",&num);
	x=num;
	square_1=num*num;
	printf("the square of the given number is : %d \n",square_1);
	while(num>0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	printf("\nthe reversed number of %d is : %d \n",x,rev);
	y=rev;
	square_2=y*y;
	printf("the square of the reversed number of %d is : %d \n",y,square_2);
	rem=0;
	rev=0;
	while(square_2>0)
	{
		rem=square_2%10;
		rev=rev*10+rem;
		square_2=square_2/10;
	}
	printf("\nthe reversed  number of %d is : %d \n",y*y,rev);
	if(square_1==rev)
	{
		printf("\nthe number %d is an adam number...",x);
	}
	else
	{
		printf("\nthe number %d is not an adam number...",x);
	}
	return 0;
}