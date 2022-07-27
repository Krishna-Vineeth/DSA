// 9921004803 - krishna vineeth
#include<stdio.h>
int main()
{
 	int i, j, r, c, a[10][10], row_sum = 0, col_sum=0;
 	printf("\n Please Enter Number of rows and columns  :  ");
 	scanf("%d %d", &r, &c);
 	printf("\n Please Enter the Matrix Elements of size %d*%d: \n",r,c);
 	for(i = 0; i < r; i++)
  	{
   		for(j = 0;j < c;j++)
    	{
      		scanf("%d", &a[i][j]);
    	}
  	}
   	printf("the entered elements of the matrix are:\n");
 	for(i = 0; i < r; i++)
  	{
   		for(j = 0;j < c;j++)
    	{
      		printf("%d ", a[i][j]);
    	}
  	    printf("\n");
  	}
    printf("\n");
  	for(i = 0; i<r; i++)
  	{
  	    for(j=0; j<c; j++)
  	    {
  	     row_sum = row_sum +a[i][j];   
  	    }
  	    printf("sum of row %d elements is: %d\n",i+1,row_sum);
  	    
  	    row_sum=0;
  	}
  	
  	for(i = 0; i<r; i++)
  	{
  	    for(j=0; j<c; j++)
  	    {
  	     col_sum = col_sum +a[j][i];   
  	    }
  	    printf("sum of column %d elements is: %d\n",i+1,col_sum);
  	    
  	    col_sum=0;
  	}
 	return 0;
}




