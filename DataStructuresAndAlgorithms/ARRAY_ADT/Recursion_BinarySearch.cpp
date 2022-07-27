#include<stdio.h>
struct Array 
{
	int A[10];
	int size;
	int length;
};

void Display(struct Array arr)
{
	int i;
	printf("\nthe elements are:\n");
	for(i=0;i<arr.length;i++)
	{
		printf("%d ",arr.A[i]);
	}
}

int Recursion_BinarySearch(int a[],int l, int h, int key)
{
	int mid=0;
	if(l<=h)
	{
		mid=(l+h)/2;
		
		if(key==a[mid])
		{
			return mid;
		}
		else if(key<a[mid])
		{
			return Recursion_BinarySearch(a,l,mid-1,key);
		}
		else
		{
			return Recursion_BinarySearch(a,mid+1,h,key);
		}
	}
	return -1;
}
int main()
{
	struct Array arr={{1,2,3,4,5,6},10,6};
	printf("the element is present at index %d ",Recursion_BinarySearch(arr.A,0,arr.length,4));
	Display(arr);
}
