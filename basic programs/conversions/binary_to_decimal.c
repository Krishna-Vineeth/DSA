// 9921004803 - krishna vineeth
#include<stdio.h>
int main()
{
	int sum=0,x=1,num;
	printf("enter binary value :\n");
	scanf("%d",&num);
	
	while(num>0)
	{
		int rem =num%10;
		sum+=x*rem;
		x*=2;
		num=num/10;
	}
	printf("decimal value = %d",sum);
return 0;
}