/*#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter n value"<<endl;
	cin>>n;
	int count=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<count<<" ";
			count++;
		}
		cout<<endl;
	}
	return 0;
}*/
// 9921004803 - krishna vineeth
#include<stdio.h>
int main()
{
	int n;
	printf("enter n value:\n");
	scanf("%d",&n);
	int count=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d ",count);
			count++;
		}
		printf("\n");
	}
	return 0;
}