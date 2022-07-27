#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two numbers:\n");
	scanf("%d %d",&a,&b);
	printf("bitwise and value :%d\n",a&b);
	printf("bitwise and value :%d\n",a|b);
	printf("bitwise and value :%d\n",a^b);
	return 0;
}