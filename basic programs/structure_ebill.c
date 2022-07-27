// 9921004803 - krishna vineeth
#include<stdio.h>
int main()
{
	int n,i;
	printf("enter number of id's' :\n");
	scanf("%d",&n);
	struct EBill {
		
		long id;
		char name[20];
		float unit,amount;
	}e[n];
	
	for(i=0;i<n;i++)
	{
		printf("\nenter ID :\n");
		scanf("%ld",&e[i].id);
		printf("enter name :\n");
		scanf("%s",e[i].name);
		printf("enter number of units :\n");
		scanf("%f",&e[i].unit);
		if(e[i].unit >= 0 && e[i].unit < 100)
		{
			e[i].amount=e[i].unit*2.5;
			printf("total amount of ID %ld = %.2f",e[i].id,e[i].amount);
		}
		else if(e[i].unit >= 100 && e[i].unit < 200)
		{
			e[i].amount=e[i].unit*5;
			printf("total amount of ID %ld =%.2f",e[i].id,e[i].amount);
		}
			else if(e[i].unit >= 200 && e[i].unit < 300)
		{
			e[i].amount=e[i].unit*7.5;
			printf("total amount of ID %ld =%.2f",e[i].id,e[i].amount);
		}
		else if(e[i].unit >= 300 && e[i].unit < 400)
		{
			e[i].amount=e[i].unit*10;
			printf("total amount of ID %ld =%.2f",e[i].id,e[i].amount);
		}
		else if(e[i].unit >= 400)
		{
			e[i].amount=e[i].unit*12;
			printf("total amount of ID %ld =%.2f",e[i].id,e[i].amount);
		}
		else
		{
			printf("invalid input of units.....");
		}
	}
	return 0;
}