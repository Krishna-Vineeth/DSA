#include<stdio.h>
void rectangle_area(int length,int breadth)
{
	printf("area of rectangle = %d\n",length*breadth);
}
void square_area(int side)
{
	printf("area of square = %d\n",side*side);
}
int main()
{
	int length,breadth,side;
	printf("enter length and breadth:\n");
	scanf("%d%d",&length,&breadth);
	rectangle_area(length,breadth);
	printf("enter side of square:\n");
	scanf("%d",&side);
	square_area(side);
	return 0;
}