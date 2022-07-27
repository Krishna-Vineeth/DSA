#include <iostream>
using namespace std;

int xor_sum()
{
	int xorsum = 0;
	//for (int i =1 ;i<=n;i++)
	for(int i =6 ;i<=10 ;i++)
	{
		xorsum = xorsum ^ i;
	}
	return xorsum;
}

/*int main()
{
	cout << xor_sum();
	//int x = (xor_sum(10)) ^ (xor_sum(5));
	//cout << x;
}
*/
int main()
{
	int n = 10 ;
	
	if (n%4==0)
	{
		cout << n;
	}
	if (n%4==1)
	{
		cout << "1";
	}
	if (n%4==2)
	{
		cout << n+1;
	}
	if (n%4==3)
	{
		cout << "0";
	}
}
