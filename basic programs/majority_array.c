// 9921004803 - krishna vineeth
#include<stdio.h>
int main()
{
    int a[20],i,j,x,n,total_count=0,count;
    printf("enter size of the array:\n");
    scanf("%d",&n);
    printf("enter the array values:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the array values are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d   ",a[i]);
    }
    printf("\n");
    for(i=0;i<n-1;i++)
    {
        count = 1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
    	if(count > total_count)
   	 	{
     	    total_count=count;
       		x=i;
    	}
    }
    if(total_count > n/2)
    {
        printf("majority element = %d",a[x]);
    }
    else
    {
        printf("majority element = NULL");
    }
    return 0;
}
