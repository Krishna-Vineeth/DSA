#include<stdio.h>
#include<stdlib.h>
struct Array
{
	int A[10];
	int size;
	int length;
};

void swap(int *x,int *y)
{
	int temp;
	
	temp=*x;
	*x=*y;
	*y=temp;
}

void Display(struct Array arr)
{
	int i=0;
	printf("\nthe array elements are:\n");
	for(i=0;i<arr.length;i++)
	{
		printf("%d ",arr.A[i]);
	}
}

void Reverse_1(struct Array *arr)
{
	int *B,i,j;
	
	B=(int *)malloc(arr->length*sizeof(int));

	for(i=arr->length-1,j=0;i>=0;i--,j++)
	{
		B[j]=arr->A[i];
	}
	for(i=0;i<arr->length;i++)
	{
		arr->A[i]=B[i];
	}
	
	free (B);
}

void Reverse_2(struct Array *arr)
{
	int i,j;
	
	for(i=0,j=arr->length-1;i<j;i++,j--)
	{
		swap(&arr->A[i],&arr->A[j]);
	}	
}

int main()
{
	struct Array arr = {{1,2,3,4,5,6,7,8,9},10,9};
	Reverse_1(&arr);
	Display(arr);	
}
