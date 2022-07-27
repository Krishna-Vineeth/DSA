#include<iostream>
using namespace std;

 int countSetBits(int n)
    {
        // Your logic here
        int x = 0;
        while((1<<x) <=n)
        {
            x++;
        }
        x = x-1;
        if (n==0)
        {
            return 0;
        }
        
        return (x * (1 << (x-1))) + (n - (1 << x) + 1) + countSetBits(n - (1 << x));
    }
    
int main()
{
	cout << countSetBits(4);
}
