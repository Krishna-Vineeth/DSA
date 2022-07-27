#include<stdio.h>
int main()
{
	int num,d=2;
	printf("enter a number :\n");
	scanf("%d",&num);
	
	while (num>1)
	{
		if(num%d==0)
		{
			printf("%d\n",d);
			num=num/d;		
			continue;
		}
			d++;
	}
	return 0;
}
	
		
	
		