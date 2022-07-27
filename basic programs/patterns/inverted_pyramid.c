/*#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" "); 
		}
		for(int k=1;k<=2*i-1;k++)
		{
			printf("*");
		}
		printf("\n");
	}
}*/
// 9921004803 - krishna vineeth
#include<stdio.h>
int main()
{
	int i,j,n,k;
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=n-i;j>=1;j--)
		{
			printf(" "); 
		}
		for(k=2*i-1;k>=1;k--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
