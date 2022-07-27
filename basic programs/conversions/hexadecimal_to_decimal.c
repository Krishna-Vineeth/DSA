#include<stdio.h>
int main()
{
	int sum=0,x=1,i;
	char s[30];
	printf("enter a hexadecimal number :\n");
	scanf("%s",s);
	
	for( i = strlen(s)-1 ; i>=0 ;i--)
	{
		if(s[i] >= '0' && s[i] <='9')
		{
			sum+= x*(s[i]-'0');
		}
		else if(s[i] >= 'A' && s[i] <= 'F')
		{
			sum+=x*(s[i]-'A'+10);
		}
		x*=16;
	}
	printf("decimal number :%d\n",sum);
	return 0;
}
