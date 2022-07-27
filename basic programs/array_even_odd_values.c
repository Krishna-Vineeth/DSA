#include<stdio.h>
int main()
{
	int a[50],i,n,sum1=0,sum2=0;
	printf("enter size of array :\n");
	scanf("%d",&n);
	
	printf("enter array values :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			sum1+=a[i];
		}
		
		else
		{
			sum2+=a[i];
		}
	}
	printf("sum of even elements in array is : %d\n",sum1);
	printf("sum of odd values in array is : %d",sum2);
	return 0;
}