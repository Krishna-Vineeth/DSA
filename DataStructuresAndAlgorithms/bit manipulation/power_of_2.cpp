#include <iostream>
using namespace std;

bool power(int n)
{
	return (n && !(n & (n-1)));
}

int main()
{
	cout << power(1);
}
