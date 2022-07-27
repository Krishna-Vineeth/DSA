#include<stdio.h>
/*int main()
{
	int i,sum=0;
	
	for(i=1;i<=10;i++)
	{
		if(i%2==0)
		{
			sum=sum+i;
		}
	}
	
	printf("the sum of first ten even numbers is : %d\n",sum);
	return 0;
}*/

int main()
{
	int i=1,sum=0;
	while(i<=20){
		if(i%2==0)
		{
			sum=sum+i;
		}
		i++;
	}
	printf("the sum of the first ten even numbers is:%d\n",sum);
	return 0;
}