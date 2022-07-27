// 9921004803 - krishna vineeth
#include<stdio.h>
void perfect(int num)
{
	int sum=0;
	
	for(int i=1;i<=num/2;i++)
	{
		if(num%i==0)
		{
			sum=sum+i;	
		}
	}
	printf("sum of the factors is = %d\n",sum);
	if(num==sum)
	{
		printf("the number %d is a perfect number.....\n",num);
	}
	else
	{
		printf("the number %d is not a perfect number....\n",num);
	}	
}
int main()
{
	int num;
	printf("enter a number : \n");
	scanf("%d",&num);
	perfect(num);
	return 0;
}