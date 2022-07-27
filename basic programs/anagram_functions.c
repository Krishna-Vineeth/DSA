// 9921004803 - krishna vineeth
#include<stdio.h>
#include<string.h>
char anagram(char *s)
{
	int temp,i,j;
		for(i=0;i<strlen(s)-1;i++)
		{
			for(j=i+1;j<strlen(s);j++)
			{
				if(s[i]>s[j])
				{
					temp=s[i];
					s[i]=s[j];
					s[j]=temp;
				}
			}	
		}
		return s;
}
int main()
{
	char x[10],y[10];
	puts("enter two strings:");
	gets(x);
	gets(y);
	puts("\nsorted strings are :");
	anagram(x);
	puts(x);
	anagram(y);
	puts(y);

	
	if(strlen(x)==strlen(y))
	{
		if(strcmp(x,y)==0)
		{
			printf("\nthe strings are anagram....");
		}	
		else
		{
			printf("\nthe strings are not anagram....");
		}
	}
	else
	{
		printf("\n the strings are not equal and not anagram");
	}
	return 0;
}
