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
	printf("\nthe elements are: \n");
	for (i=0;i<arr.length;i++)
	{
		printf("%d ",arr.A[i]);
	}
}

void swap(int *x, int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
int LinearSearch(struct Array arr, int key)
{
	int i;
	for(i=0;i<arr.length;i++)
	{
		if(key==arr.A[i])
		{
			return i;
		}
	}
}
int main()
{
	struct Array arr={{6,2,1,0,8,9},10,6};
	printf("the element is present at index %d....",LinearSearch(arr,8));
	Display(arr);
}
