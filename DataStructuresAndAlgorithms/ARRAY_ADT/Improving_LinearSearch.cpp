// Improving the LinearSearch - makes easy for compiler  when checking for the same key next time.
// This method will modify the array 
// 1. Move to head or front - moving the key element to the starting index
// 2. Transposition - moving the key element forward(one time) whenever checking for same element 
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
int LinearSearch(struct Array *arr, int key)
{
	int i;
	for(i=0;i<arr->length;i++)
	{
		if(key==arr->A[i])
		{
			swap(&arr->A[i],&arr->A[0]); // move to head or front
			//swap(&arr->A[i],&arr->A[i-1]); // transposition
			return i;
		}
	}
}
int main()
{
	struct Array arr={{1,2,3,4,5,6},10,6};
	printf("the element is presemt at index %d....\n",LinearSearch(&arr,6));
	printf("the element is presemt at index %d....\n",LinearSearch(&arr,6));
	printf("the element is presemt at index %d....\n",LinearSearch(&arr,6));
	Display(arr);
}
