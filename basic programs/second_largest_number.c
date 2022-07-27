// 9921004803 - krishna vineeth
#include<stdio.h>
int main()
{
	int a[50],n,i,j,c;
	printf("enter the number:\n");
	scanf("%d",&n);
	printf("enter the array values:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				c=a[i];
				a[i]=a[j];
				a[j]=c;
			}
		}
	}
	printf("the sorted order is :\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	printf("\nthe second largest number of the array is : %d",a[n-2]);
	return 0;
}