#include<stdio.h>
int main()
{
	int num,rem,rev=0,x,y,z;
	printf("enter the number:\n");
	scanf("%d",&num);
	x=num;
	y=x*x;
	printf("\nsquare of entered value is : %d\n",y);
	while(num>0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	
	printf("the reversed number is : %d\n",rev);
	z=rev*rev;
	printf("square of reversed number is : %d\n",z);

	rem=0;
	rev=0;
	
	while(z>0)
	{
		rem=z%10;
		rev=rev*10+rem;
		z=z/10;
	}
	
	if(y==rev)
	{
		printf("\n....the number %d is a adam number....",x);
	}
	else
	{
		printf("\n....the number %d is not a adam number....",x);
	}
	return 0;
}