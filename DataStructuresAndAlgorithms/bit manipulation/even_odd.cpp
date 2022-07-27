#include <iostream>
using namespace std;

void even_odd(int n)
{
	if ((n & 1) == 0)
	{
		cout<<"even";
	}
	else
	{
		cout<<"odd";
	}
}

int main()
{
	even_odd(8);
}
