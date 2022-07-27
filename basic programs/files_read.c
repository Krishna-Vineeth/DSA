// 9921004803 - krishna vineeth
#include<stdio.h>
int main()
{
	FILE *p;
	char i[100];
	p=fopen("practice.txt","r");
	while(!feof(p))
	{
		fscanf(p,"%s",i);
	}
	printf("%s",i);
}