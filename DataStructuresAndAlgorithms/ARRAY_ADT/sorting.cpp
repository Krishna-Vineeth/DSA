#include<stdio.h>
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
	printf("the array elements are:\n");
	for(i=0;i<arr.length;i++)
	{
		printf("%d ",arr.A[i]);
	}
}

void Insert(struct Array *arr,int element)
{
	int i=arr->length-1;
	if(arr->length==arr->size)
	{
		return;
	}
	while(i>=0 && arr->A[i]>element)
	{
		arr->A[i+1]=arr->A[i];
		i--;
	}
	arr->A[i+1]=element;
	arr->length++;
}

bool IsSorted(struct Array arr)
{
	int i;
	for(i=0;i<arr.length-1;i++)
	{
		if(arr.A[i]>arr.A[i+1])
		{
			return false;
		}
	}
	return true;
}

void Rearrange(struct Array *arr)
{
	int i,j;
	i=0;
	j=arr->length-1;
	
	while(i<j)
	{
		while(arr->A[i]<0)
		{
			i++;
		}
		while(arr->A[j]>=0)
		{
			j--;
		}
		if(i<j)
		{
			swap(&arr->A[i],&arr->A[j]);
		}
	}
}
int main()
{
	struct Array arr={{-1,2,3,0,-5,6,-7,8,9},10,9};
	int i,j,temp;
	printf("%d\n",IsSorted(arr));
	Insert(&arr,-10);
	Rearrange(&arr);
	for(i=0;i<arr.length;i++)
	{
		for(j=0;j<arr.length;j++)
		{
			if(arr.A[i]<arr.A[j])
			swap(&arr.A[i],&arr.A[j]);
		}
	}
	printf("%d\n",IsSorted(arr));
	Display(arr);
}
