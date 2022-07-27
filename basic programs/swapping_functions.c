// 9921004803 - krishna vineeth
#include<stdio.h>
void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	return a,b;
	//printf("after swapping  : a=%d \t b=%d \n",a,b);

}
int main()
{
	int a,b;
	printf("enter two numbers : \n");
	scanf("%d %d",&a,&b);
	printf("before swapping : a=%d \t b=%d \n",a,b);
	swap(a,b);
	printf("%d %d",a,b);
		return 0;
}