// 9921004803 -krishna vineeth
#include<stdio.h>
#include<string.h>
void dig_freq(char *s)
{
	int count;
	puts(s);
	for(int i=0;i<strlen(s)-1;i++)
	{
		count=1;
		for(int j=i+1;j<strlen(s);j++)
		{
			if(s[i]==s[j])
			{
				count++;
			}
		}
			printf("%d ",count);
	}
}

int main()
{
	char s[100];
	puts("enter a string : ");
	gets(s);
	dig_freq(&s);
	
	return 0;	
}