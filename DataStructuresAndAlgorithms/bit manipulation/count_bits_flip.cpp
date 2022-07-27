#include<iostream>
using namespace std;
int countBitsFlip(int a, int b){
        
        // Your logic here
        int n;
        n = a^b;
        
        int count = 0;
        
        while(n)
        {
            if(n&1==1)
            {
                count++;
            }
            n = n>>1;
        }
        
        return count;
    }

int main()
{
	cout << "count = "<<countBitsFlip(20,25);
}
