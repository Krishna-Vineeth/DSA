#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {

    int s[100];
    for(int i=0;i<n;i++)
    {
    float a=(tr[i].a+tr[i].b+tr[i].c)/2.0;
       s[i]=(a*(a-tr[i].a)*(a-tr[i].b)*(a-tr[i].c));

    }

    for(int i=0;i<n;i++)    
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(s[j]>s[j+1])     
            {
                int temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;

                triangle x=tr[j];
                tr[j]=tr[j+1];
                tr[j+1]=x;
            }
        }
    }
}


int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}