#include <iostream>
using namespace std;

int getbit(int n ,int pos)
{
	return (n & (1<<pos));
}

int unique(int arr[],int n)
{
	int xorsum=0;
	for(int i=0;i<n;i++)
	{
		xorsum = xorsum ^ arr[i];
	}
	
	int temp = xorsum;
	int setbit = 0;
	int pos = 0;
	
	while(setbit!=1)
	{
		setbit = xorsum & 1;
		pos++;
		xorsum = xorsum >> 1;
	}
	
	int newxor=0;
	for(int i = 0;i<n;i++)
	{
		if(getbit(arr[i],pos-1))
		{
			newxor = newxor ^ arr[i];
		}
	}
	cout << newxor <<endl;
	cout << (newxor ^ temp) << endl;
}

int main()
{
	int a[10] = {1,2,3,4,5,6,4,3,2,1};
	unique(a,10);
}
