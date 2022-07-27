// 9921004803 - krishna vineeth
#include<stdio.h> 
int main()
{
 	int i, j, r, c, a[10][10], sum = 0;
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
  	for(i = 0; i < r; i++)
  	{
   		sum = sum + a[i][i];
  	}
 	printf("\n The Sum of Diagonal Elements of a Matrix =  %d", sum);
 	return 0;
}


