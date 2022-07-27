// Keep subtracting the divisor from the dividend until dividend becomes less than divisor. The dividend becomes the remainder, 
// and the number of times subtraction is done becomes the quotient.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    long long divide(long long dividend, long long divisor) 
    {
        int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;
        
        dividend = abs(dividend);
        divisor = abs(divisor);
        
        long long quotient = 0, temp = 0;
        
        for(int i=31;i>=0;i--)
        {
            if(temp + (divisor<<i) <= dividend)
            {
                temp = temp + (divisor<<i);
                quotient = quotient | 1LL << i;
            }
        }
        
        return quotient * sign;
    }
}s;

int main()
{
	
	cout << s.divide(10,3);
}
