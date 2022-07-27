#include <bits/stdc++.h>
#include<iostream>
#include<stack>
using namespace std;

int evaluatePostfix(string S)
    {
        // Your code here
        stack<char> st;
        int x;
        for(int i=0;i<S.length();i++)
        {
            if(isdigit(S[i]))
            {
                st.push(S[i]-'0');
            }
            else
            {
                int x1 = st.top();
                st.pop();
                int x2 = st.top();
                st.pop();
                switch (S[i])
    			{
        			case '+': x=x2+x1; break;
        			case '-': x=x2-x1; break;
        			case '*': x=x2*x1; break;
        			case '/': x=x2/x1; break;
    			}
    			st.push(x);
            }
        }
        return st.top();
    }
int main()
{
	char exp[] = "234*+82/-";//"231*+9-";
	cout<<"postfix evaluation: "<< evaluatePostfix(exp);
	return 0;
}
