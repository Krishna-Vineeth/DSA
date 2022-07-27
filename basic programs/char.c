//%[^\n]%*c (or) %[^\n]s   (or) %[^\n]

#include <stdio.h>

int main()
{
	char name[15];
	printf("enter your name:\n");
	scanf("%[^\n]s",&name);
	printf("the name entered is:%s\n",name);
}