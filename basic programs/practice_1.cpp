/*#include<stdio.h>

int freq(int s)
{ 
	int a[100],count=0,i,n;
	printf("enter n :\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(int i=0;i<n;i++)
	{
		if(a[i]==s)
		{
			count++;
		}
	}
	printf("%d",count);
}
int main()
{
	freq(6);
}*/
#include<stdio.h>

int main()
{
    int a[100];  
    int i,n,count=0;
    
    printf("enter n :\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
 

    for(i=0;i<n;i++)  
    {
        count=0;
    	for(int j=0;j<n;j++)
    	{
    		if(a[i]==a[j])
    		{
          	count++;
			}
    	}
    	printf(" the number %d occured %d times \n ",a[i],count);
	}		
    return 0;
}

/*#include<stdio.h>        				// digit frequency of of numbers 0 to 9

int main()
{
    int a[100];  
    int i,n,count=0;
    
    printf("enter n :\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
 

    for(i=0;i<10;i++)  
    {
        count=0;
    	for(int j=0;j<n;j++)
    	{
    		if(a[j]==i)
    		{
          	count++;
			}
    	}
    	printf("%d ",count);
	}		
    return 0;
}*/