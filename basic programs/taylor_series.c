/*#include<stdio.h>

double e(int x, int n)
{
	static double s;
	
	if (n==0)
	{
		return s;
	}
	else
	{
		s=1+x*s/n;
	}
	return e(x,n-1);
}
int main()
{
	printf("%lf",e(1,10));
	return 0;
}*/

/*#include<stdio.h>
double e(int x, int n)
{
	double r=1;
	for(;n>0;n--)
	{
		r=1+x*r/n;
	}
	return r;
}
int main()
{
	printf("%lf",e(1,10));
	return 0;
}
*/

#include<stdio.h>
double e(int x, int n)
{
	double r=1,p=1,f=1;
	
	for(int i=1;i<=n;i++)
	{
		p=p*x;
		f=f*i;
		r=r+p/f;
	}
	return r;	
}
int main()
{
	printf("%lf",e(1,10));
	return 0;
}