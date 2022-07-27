// 9921004803 - krishna vineeth
#include<stdio.h>
#include<string.h>
int main()
{
	int x[10],y[10],z[10],a[10],n;
	
	puts("enter lower case string x");
	gets(x);
	strcpy(a,x);
	printf("the length of string x is %d \n",strlen(x));
	
	puts("\nenter upper case string y");
	gets(y);
	
	printf("\nthe upper case string of x is %s\n",strupr(x));
	printf("the lower case string of y is %s\n",strlwr(y));

	strcpy(z,y);
	printf("\nthe copied string is %s\n",z);
	
	strcat(x,y);
	printf("\nthe concatenated string is %s\n",x);
	
	printf("\nthe reversed string of x is %s\n",strrev(x));

	printf("\nthe strings that are being compared are :\n");
	printf("%s & %s ",a,z);
	printf("\n");
	n=strcmp(a,z);
	printf("\ncompared value is %d",n);

	return 0;
}