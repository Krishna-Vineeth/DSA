// 9921004803 -krishna vineeth
#include<stdio.h>
#include<string.h>
int main()
{
	char x[5][10],temp[10];
	int i,j,n;
	printf("Enter the number of strings \t");
	scanf("%d",&n);
	printf("enter %d strings\n",n);
	for(i=0;i<=n;i++)
		gets(x[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strcmp(x[i],x[j])>0)
			{
				strcpy(temp,x[i]);
				strcpy(x[i],x[j]);
				strcpy(x[j],temp);
			}
		}
	}
	printf("\nAfter sorting\n");
	for(i=0;i<=n;i++)
		puts(x[i]);
	return 0;
}


/*41534
41722
4236
4802*/







