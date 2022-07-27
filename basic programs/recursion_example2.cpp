#include<stdio.h>  
void natural_numbers(int num)  
{  
    if(num)  
    {
        natural_numbers(num-1); 
		printf("\n%d\n", num); 
	}
	else
	{ 
        return;  
  	}
      
}    

  
int main()  
{  
    int n;  
  
    printf("Enter n value \n");  
    scanf("%d", &n);  
	natural_numbers(n);  
 
    return 0;  
} 
/*#include<stdio.h>
void natural_numbers(int n,int limit)
{
    if(n<=limit)
    {
        printf("%d ",n);
        natural_numbers(n+1,limit);
    }
}
int main()
{
    int n=1,limit;
    printf("enter limit value:\n");
    scanf("%d",&limit);
    printf("First 50 Natural Numbers are:\n");
    natural_numbers(n,limit);
}*/

/*#include <iostream>
using namespace std;

int main()
{
    int a,b;
    printf("enter a and b:\n");
    scanf("%d%d",&a,&b);
    if(!(a/b)) // if a is less than b then division result will be zero.
{
    cout << "b is greater than a";
}
else if (!(a-b)) // we know a is greater than or equal to b now.  check whether they are equal.
{
    cout << "a and b are equal";
}
else
    cout << "a is greater than b";
}*/