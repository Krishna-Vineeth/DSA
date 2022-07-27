// 9921004803 - krishna vineeth
#include<stdio.h>
#include<string.h>
int main()
{
	char x[20],temp;
	puts("enter a string: ");
	gets(x);
	int i,j,n;
	n=strlen(x);
	printf("Before sorting =%s\n",x);
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(x[i]>x[j])
			{
				temp=x[i];
				x[i]=x[j];
				x[j]=temp;
			}
		}	
	}
	printf("After sorting = %s\n",x);
	printf("desending order : \n");
	for(i=n-1;i>=0;i--)
	{
		printf("%c",x[i]);
	}
	return 0;
}









