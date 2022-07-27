#include<stdio.h>
#include<stdlib.h>
void display(int arr[],int n)
{
	printf("elements are : \n");
	
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}

void swap(int *a,int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}


// normal bubble sort is just using two for loops from 0 to  n-1 and also no flag

int * bubble_sort(int *a,int n)    // optimizes bubble sort 
{
	int temp;
	for(int i=0; i<n-1; i++)
	{
		int flag = 0;
		for(int j=0; j<n-1-i; j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
				
				flag = 1;
			}
		}
		
		if (flag == 0)
		{
			break;
		}
	}
	
	return a;
	
}

int *insertion_sort(int *a,int n)
{
	for(int i=1; i<n; i++)
	{
		int temp = a[i];
		int j = i-1;
		
		while(j>=0 && a[j]>temp)
		{
			a[j+1]=a[j];
			j--;
		}
		
		a[j+1] = temp;
	}
	
	return a;
}

int *selection_sort(int *a, int n)
{
	for(int i=0; i<n-1; i++)
	{
		int min = i;
		for(int j=i+1; j<n; j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		
		if (min!=i)
		{
			swap(&a[i],&a[min]);
		}
	}
	
	return a;
}

int partition(int *a,int l,int h)
{
	int pivot = a[l];
	int start = l;
	int end = h;
	
	while(start<end)
	{
		while(a[start] <= pivot)
		{
			start++;
		}
		while(a[end] > pivot)
		{
			end--;
		}
		if(start < end)
		{
			swap(&a[start],&a[end]);
		}
	}
	
	swap(&a[l],&a[end]);
	
	return end;
}

void *quick_sort(int *a,int l,int h)
{
	if(l<h)
	{
		int location = partition(a,l,h);
		quick_sort(a,l,location-1);
		quick_sort(a,location+1,h);
	}
}


void merge(int *a,int l,int mid,int h)
{
	int i=l;
	int j=mid+1;
	int k=l;
	
	int *b = (int *)malloc((h)*sizeof(int));
	while(i<=mid && j<=h)
	{
		if(a[i]<=a[j])
		{
			b[k++] = a[i++]; 
		}
		else
		{
			b[k++] = a[j++];
		}
	}
	
	for(;i<=mid;i++)
	{
		b[k++] = a[i];
	}
	
	for(;j<=h;j++)
	{
		b[k++] = a[j];
	}
	
	for(k=l;k<=h;k++)
	{
		a[k] = b[k];
	}
}

void merge_sort(int *a, int l,int h)
{
	if(l<h)
	{
		int mid = (l+h)/2;
		
		merge_sort(a,l,mid);
		merge_sort(a,mid+1,h);
		merge(a,l,mid,h);
	}
}

void heapify(int *a,int n,int i)
{
	int largest = i;
	int l = (2*i)+1;
	int r = (2*i)+2;
	
	while(l<n && a[l] > a[largest])
	{
		largest=l;
	}
	
	while(r<n && a[r] > a[largest])
	{
		largest=r;
	}
	if(largest!=i)
	{
		swap(&a[largest],&a[i]);
		heapify(a,n,largest);
	}
}

void heap_sort(int *a,int n)
{
	for(int i=n/2-1;i>=0;i--)
	{
		heapify(a,n,i);
	}
	for(int i=n-1;i>0;i--)
	{
		swap(&a[i],&a[0]);
		heapify(a,i,0);
	}
}

int main()
{
	int a[10] = {20,-5,6,28,1,7,0,8};
	
	//bubble_sort(a,8);
	//insertion_sort(a,8);
	//selection_sort(a,8);
	//quick_sort(a,0,7);
	//merge_sort(a,0,7);
	heap_sort(a,8);
	display(a,8);
	
}
