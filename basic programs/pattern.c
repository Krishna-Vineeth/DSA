#include<stdio.h>
int main()
{
	int i,j,n,len;
	int r,c,min;
	printf("enter a number :\n");
	scanf("%d",&n);
	len=n*2-1;
	
	for(i=1;i<=len;i++)
	{
		for(j=1;j<=len;j++)
		{
			r = i<=len-i ? i-1 : len-i;
			c = j<=len-j ? j-1 : len-j;
			min = r<=c ? r : c;
			printf("%d ",n-min);
		}
		printf("\n");
	}
	return 0;
}

/*#include<stdio.h>
int main()
{
	int i,j,n,len;
	int r,c,min;
	printf("enter a number :\n");
	scanf("%d",&n);
	len=n*2-1;
	
	for(i=0;i<len;i++)
	{
		for(j=0;j<len;j++)
		{
			r = i<=len-i ? i : len-i-1;
			c = j<=len-j ? j : len-j-1;
			min = r<=c ? r : c;
			printf("%d ",n-min);
		}
		printf("\n");
	}
	return 0;
}*/
/*#include<stdio.h>
int main()
{
	int i,j,n,len;
	int min;
	printf("enter a number :\n");
	scanf("%d",&n);
	len=n*2-1;
	
	for(i=0;i<len;i++)
	{
		for(j=0;j<len;j++)
		{
			min = i<j ? i : j;
			min = min<len-i ? min : len-i-1;
			min = min<len-j-1 ? min : len-j-1;
			printf("%d ",n-min);
		}
		printf("\n");
	}
	return 0;
}*/

