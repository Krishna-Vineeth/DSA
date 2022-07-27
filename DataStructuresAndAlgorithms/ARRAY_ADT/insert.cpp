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
void Append(struct Array *arr, int element)
{
	if(arr->length<arr->size)
	{
		arr->A[arr->length]=element;
		arr->length++;
		//arr->A[arr->length++]=element;
	}
}
void Insert(struct Array *arr, int index, int element)
{
	int i;
	if(index>=0 &&index<=arr->length)
	{
		for(i=arr->length;i>index;i--)     // <= length
		{
			arr->A[i]=arr->A[i-1];
		}
			arr->A[index]=element;		
			arr->length++;
	}
}
int Delete(struct Array *arr, int index)
{
	int x;
	int i;
	if(index>=0 && index<arr->length)    // < length
	{
		x=arr->A[index];
		for(i=index;i<arr->length-1;i++)
		{
			arr->A[i]=arr->A[i+1];
		}
		arr->length--;
		return x;
	}
	else
	{
		return -1;
	}
}

int main()
{
	struct Array arr={{2,3,4,5,6,7,8,9},10,8};
	//Append(&arr,10);
	Insert(&arr,1,30);
	//printf("deleted element is: %d ",Delete(&arr,8));
	Display(arr);
	
	return 0;
}
