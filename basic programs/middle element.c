// 9921004803 - krishna vineeth
#include<stdio.h>
int main()
{
	int n;
	printf("enter the value for n:\n");
	scanf("%d",&n);
	int i,a[n],s;
	s = sizeof(a)/sizeof(int);
	printf("enter the array values:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("the array values are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d  ",a[i]);
	}
	printf("\n");
	
	printf("the middle element is : %d\n",a[s/2]);
	return 0;
}
