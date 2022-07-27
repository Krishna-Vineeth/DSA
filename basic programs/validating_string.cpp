#include<stdio.h>
#include<string.h>

int validate(char *s)
{
	int i;
	for(i=0;s[i]!='\0';i++)
	{
		if(!(s[i]>=65 && s[i]<=90) && !(s[i]>=97 && s[i]<=122) && !(s[i]>=48 && s[i]<=57))
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	char s[10];
	puts("enter a string");
	gets(s);
	
	if(validate(s))
	{
		printf("valid string");
	}
	else
	{
		printf("invalid string");
	}
	
}
