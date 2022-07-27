#include <iostream>
using namespace std;

int getbit(int n , int pos)
{
	return (n & (1<<pos));
}

int setbit(int n, int pos)
{
	return (n | (1<<pos));
}

int unique(int arr[], int n)
{
	int result = 0;
	
	for (int i = 0 ;i<64;i++)
	{
		int sum = 0;
		for (int j=0;j<n;j++)
		{
			if(getbit(arr[j],i))
			{
				sum++;
			}
		}
		if (sum%3!=0)
		{
			result = setbit(result,i);
		}
	}
	return result;
}

int main()
{
	int a[10]={1,3,2,3,4,2,1,1,3,2};
	cout << unique(a,10);
}
