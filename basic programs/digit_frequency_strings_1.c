// 9921004803 -krishna vineeth
#include <stdio.h>
#include <string.h>
int main() {

    int count;
    char s[1000],x[15]={'0','1','2','3','4','5','6','7','8','9'};
    puts("enter the string : ");
	gets(s);
    puts("occurence of each numbers are : ");
    for(int i=0;i<10;i++)
    {
        count=0;
        for(int j=0;j<strlen(s);j++)
        {
        if(s[j]==x[i])
        {
            count++;    
        }
        }
        printf("%d ",count);
    }
    return 0;    
}
