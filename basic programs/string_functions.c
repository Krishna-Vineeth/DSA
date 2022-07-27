#include<stdio.h>
#include<string.h>
int main()
{
	char a[20],b[20],c[20],d[20],e[20];
	
	puts("enter the string one:");
	gets(a);
	printf("the entered string is: %s\n",a);
	
	puts("enter the string two:");
	gets(b);
	printf("the entered string is: %s\n",b);
	
	int y;
	y = strcmp(a,b);
	printf("compared value is : %d\n",y);
	
	int x;
	x = strlen(a);
	printf("the length of the string is: %d\n",x);
	
	strlwr(a);
	printf("the lower case of the string is: %s\n",a);
	
	strupr(b);
	printf("the upper case of the string is: %s\n",b);
	
	strcat(a,b);
	printf("the concatenated string is : %s\n",a);
	
	strcpy(a,b);
	printf("the copied string is : %s\n",a);
	
	strrev(a);
	printf("the reversed string is :%s\n",a);
	return 0;
}