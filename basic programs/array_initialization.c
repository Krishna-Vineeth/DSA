// 9921004803 - krishna vineeth
#include<stdio.h>
int main()
{
	int a[20][20],i,j,r,c;
	printf("enter rows :\n");
	scanf("%d",&r);
	printf("enter columns :\n");
	scanf("%d",&c);
	
	printf("enter array values :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		scanf("%d",&a[i][j]);
		}
	}
	printf("the array values are :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}