#include<stdio.h>

int main()
{
	int a[5][5],b[5][5],c[5][5],r1,c1,r2,c2,i,j;
	
	printf("enter size of matrix a:\n");
	scanf("%d %d",&r1,&c1);
	
	printf("enter the size of matrix b:\n");
	scanf("%d %d",&r2,&c2);
	


	if(r1==r2 && c1==c2)
	{				
		printf("matrix addition is possible....\n");
			
		printf("enter the array values of %d*%d matrix a:\n",r1,c1);

		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		printf("enter the array values of %d*%d matrix a:\n",r2,c2);
	
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
		
  		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				c[i][j]=a[i][j]+b[i][j];
			}
		}		
    	printf("\t........the %d*%d matrix after addition is.........\n ",r1,c1);
	
		for(i=0;i<r1;i++)		
		{
		    for(j=0;j<c1;j++)
			{
			
				printf("\t\t\t%d  ",c[i][j]);
			}
	    		printf("\n");
    	}
	}	    
	
	else
	{
		printf("matrix addition is not possible....\n");
	}
	
}
