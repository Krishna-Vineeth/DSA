// 9921004803 - krishna vineeth
#include<stdio.h>
int main()
{
	int a[50][50],i,j,r,c;
	printf("enter row and column of array:\n");
	scanf("%d %d",&r,&c);
	
	printf("enter array values :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("array values are:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}

	
	printf("transpose of a matrix is :\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}
	return 0;
}