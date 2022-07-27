/*#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter a number"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n+1-i;j++)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
	return 0;
}*/


#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter pyramid size:\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+1-i;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	
}
