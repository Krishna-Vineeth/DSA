// 9921004803 - krishna vineeth
#include<stdio.h>
void perfect(int num)
{
	int x,sum=0;
	x=num;
	for(int i=1;i<=num/2;i++)
	{
		if(num%i==0)
		{
			sum=sum+i;	
		}
	}
	if(x==sum)
	{
		printf("%d ",x);
	}
}
int main()
{
	int num,range;
	printf("enter range :\n");
	scanf("%d",&range);
	printf("perfect numbers are : \n");
	for(num=1;num<range;num++)
	{
		perfect(num);
	}
	return 0;
}