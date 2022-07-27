#include<stdio.h>

struct Array 
{
	int A[10];
	int size;
	int length;
};
void Display(struct Array arr)
{
	int i=0;
	printf("\nthe array elements are:\n");
	for(i=0;i<arr.length;i++)
	{
		printf("%d ",arr.A[i]);
	}
}
int Get(struct Array arr, int index)
{
	if(index>=0 && index<arr.length)
	{
		return arr.A[index];
	}
}

void Set(struct Array *arr, int index, int element)
{
	if(index>=0 && index<arr->length)
	{
		arr->A[index]=element;
	}
}

int Max(struct Array arr)
{
	int i,max;
	max=arr.A[0];
	
	for(i=0;i<arr.length;i++)
	{
		if(arr.A[i]>max)
		{
			max=arr.A[i];
		}
	}
	return max;
}

int Min(struct Array arr)
{
	int min,i;
	min=arr.A[0];
	
	for(i=0;i<arr.length;i++)
	{
		if(arr.A[i]<min)
		{
			min=arr.A[i];
		}
	}
	return min;
}

int Sum(struct Array arr)
{
	int i,sum=0;
	
	for(i=0;i<arr.length;i++)
	{
		sum=sum+arr.A[i];
	}
	return sum;
}
/*
int Recursive_Sum(int A[],int length)
{
	length=sizeof(A)/sizeof(int);
	if(length<0)
	{
		return 0;
	}
	else
	{
		return Recursive_Sum(A,length-1)+A[length];
	}
}
*/
float Avg_1(struct Array arr)
{
	return Sum(arr)/arr.length;				//(float)Sum(arr)/arr.length
}

float Avg_2(struct Array arr)
{
	int i,sum=0;
	
	for(i=0;i<arr.length;i++)
	{
		sum=sum+arr.A[i];
	}
	return sum/arr.length;
}

int main()
{
	struct Array arr={{1,2,3,4,5,6,7},10,7};
	
	printf("element at given index is : %d",Get(arr,5));
	Set(&arr,5,-50);
	Display(arr);
	printf("\nthe maximum element in the given array is : %d\n",Max(arr));
	printf("the minimum element in the given array is : %d\n",Min(arr));
	printf("sum of elements : %d\n",Sum(arr));
	//printf("sum of elements using recursion :%f ",Recursive_Sum(arr.A,arr.length));
	printf("average of elements is : %f\n",Avg_1(arr));
	printf("average of elements is :%f\n",Avg_2(arr));
}
