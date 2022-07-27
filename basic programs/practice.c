/*#include<stdio.h>
#include<string.h>

void dig_freq(char c)
{
	
	char s[100];
	gets(s);
	int count;
	for(int i=0;s[i];i++)
	{
		count=0;
	printf("%d ",count);
}

int main()
{
	dig_freq("a");
	
	return 0;	
}*/

#include<stdio.h>
#include <string.h>
 
int main()
{
    char s[1000],c;  
    int i,count=0;
 
    printf("Enter  the string : ");
    gets(s);
    
    for(i=0;i<strlen(s);i++)  
    {
        count=0;
    	for(int j=0;j<strlen(s);j++)
    	{
    		if(s[i]==s[j])
    		{
          	count++;
			}
    	}
    	printf("character '%c' occurs %d times \n ",s[i],count);
	}		
    return 0;
}