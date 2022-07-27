#include<stdio.h>
void square(int n);
void fact(int n);
void cube(int n);
int main()
{
	int n=2;
	if(n%5==0 && n%3==0)
		square(n);
	else if(n%5==0)
		fact(n);
	else if(n%3==0)
		cube(n);
	else
		printf("Not divisible");
	return 0;
}
void cube(int n)
{
	printf("cube=%d",n*n*n);
}
void square(int n)
{
	printf("square=%d",n*n);
}
void fact(int n)
{
	int i,fact1=1;
	for(i=1;i<=n;i++)
		fact1=fact1*i;
		
	printf("fact=%d",fact1);
}









