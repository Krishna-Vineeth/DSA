#include<stdio.h>
void words(char *s)
{
	int count=1;
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]==' ')
		{
			count++;
		}
	}
	printf("number of words = %d ",count);
}
int main()
{
	char s[50];
	puts("enter a string:");
	gets(s);
	words(s);	
}