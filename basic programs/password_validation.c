#include<stdio.h>
int main()
{
	char p[50];
	int count1=0,count2=0,count3=0,count4=0,count5=0;
	puts("enter your password");
	gets(p);
	
	if(strlen(p)>=6)
	{
		count1=1;
	}

	for(int i=0;p[i]!='\0';i++)
	{
		if(p[i]>='0' && p[i]<='9')
		{
			count2=1;
		}
		if(p[i]>='a' && p[i]<='z')
		{
			count3=1;
		}
		if(p[i]>='A' && p[i]<='Z')
		{
			count4=1;
		}
		if(p[i]=='@' || p[i]=='$' || p[i]=='#' || p[i]=='*' || p[i]=='&')
		{
			count5=1;
		}
	}
	
	if(count1==0 || count2==0 || count3==0 || count4==0 || count5==0)
	{
		printf("invalid format of password....");
	}
	else
	{
		printf("your password is valid....");
	}
	return 0;
}