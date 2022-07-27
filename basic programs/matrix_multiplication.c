// 9921004803 - krishna vineeth
#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10];
	int i,j,k,r1,c1,r2,c2;
	printf("enter the size of the matrix a:\n");
	scanf("%d %d",&r1,&c1);
	printf("enter the size of the matrix b:\n");
	scanf("%d %d",&r2,&c2);
	
	if(c1==r2)
	{
		printf("\nmatrix multiplication is possible:\n");
		
		printf("\nenter %d * %d matrix of a\n",r1,c1);
		
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		
		printf("enter %d * %d matrix of b\n",r2,c2);
		
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
		
		printf("\nmatrix a :\n");
		
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
		printf("\nmatrix b :\n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("%d ",b[i][j]);
			}
			printf("\n");
		}
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				c[i][j]=0;
				for(k=0;k<c1;k++)
				{
					c[i][j] = c[i][j] + a[i][k] * b[k][j];
				}
			}
		}
		printf("\n matrix %d*%d after multiplication is :\n",r1,c2);
		 for(i=0;i<r1;i++)
		 {
		 	for(j=0;j<c2;j++)
		 	{
		 		printf("%d ",c[i][j]);
			 }
			printf("\n");	
		 }
	}
		 else
		 {
		 	printf("matrix multiplication is not possible:\n");
		 }
	return 0;
}