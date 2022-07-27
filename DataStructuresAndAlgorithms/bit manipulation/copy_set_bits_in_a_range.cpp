#include<iostream>
using namespace std;

int copy(int x,int y,int l,int r)
{
	if (l < 1 || r > 32)
	{
		return -1;
	}
	
	for (int i=l;i<=r;i++)
	{
		int mask = 1 << (i-1);
		
		if(y & mask)
		{
			x = x | mask;
		}
	}
	return x;
}

int main()
{
	cout << copy(10,13,1,32); 
}
