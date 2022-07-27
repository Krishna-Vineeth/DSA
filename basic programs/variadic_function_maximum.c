#include<stdarg.h>
#include<stdio.h>
int maximum(int n, ...)
{
	int max=0;
	
	va_list ptr;
	va_start (ptr,n);
	
	for(int i=0;i<n;i++)
	{
		int temp = va_arg(ptr,int);
		
		max = temp > max ? temp : max;
	}
	va_end(ptr);
	return max;
}
int main()
{
	printf("\n %d ",maximum(2, 1, 2));
 
    printf("\n %d ",maximum(3, 3, 4, 5));
 
    printf("\n %d ",maximum(4, 6, 7, 8, 9));
 
    printf("\n");
    
    return 0;
}