#include<stdio.h>
#include<string.h>
int main()
{
	char x[20],y[20],t[20];
	
	puts("enter the string x:");
	gets(x);
	
	strcpy(t,x);
	printf("the copied string from variable x to t is : %s\n",t);
	
	printf("the reversed string of the string x is : %s\n",strrev(x));
	
	int n;
	n= strlen(x);
	
	printf("the lenght of the string x is : %d\n",n);
	
	puts("\nenter the string y:");
	gets(y);
	
	strcat(strrev(x),strrev(y));
	printf("the concatenated string is : %s\n",x);
	
	strcpy(x,y);
	printf("the copied string from variable y to x is : %s\n",x);
	
	strrev(y);
	int z;
	z = strcmp(t,y);
	printf("the compared value is : %d\n",z);
	if(z==0)
	{
		printf("strings are equal.....");
	}
	else
	{
		printf("strings are not equal.....");
	}
	return 0;
}