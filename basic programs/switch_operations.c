#include<stdio.h>
int main()
{
	int a,b;
	char x;
	
	printf("enter the operator :\n");
	scanf("%c",&x);	
	printf("enter two numbers :\n");
	scanf("%d %d",&a,&b);
	
	switch(x)
	{
		case '+':
		
			printf("sum=%d",a+b);
			break;
		case '-':
			
			printf("sub=%d",a-b);
			break;
		case  '*':
		
			printf("mul=%d",a*b);
			break;
		case '/':
			
			printf("div=%d",a/b);
			break;
		default :
			printf("not valid");
			break;
	}
	
	return 0;
}