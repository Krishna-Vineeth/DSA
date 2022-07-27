#include<stdio.h>
int main(){
	int a[10],n,max=0;
	printf("enter size:\n");
	scanf("%d",&n);
	
	printf("enter array values:\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(int i=0;i<n;i++)
	{
		
		max = a[i] > max ? a[i] : max;		// min = a[i] < min ? a[i] : min;
	}
	printf("minimum element = %d",max);
	return 0;
}

/*#include<stdio.h>
int main()
{
	int a[10],n,i;
	printf("enter size of array :\n");
	scanf("%d",&n);
	
	printf("enter array values:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int min=0;
	
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("minimum value = %d",min);
}*/