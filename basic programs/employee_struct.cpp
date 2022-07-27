// 9921004803 - krishna vineeth
#include<stdio.h>
int main()
{
	struct salary
	{
		int id;
		char name[20];
		float bp,others,emi,tax,pf,netsalary;
	}e[10];
	int n,i;
	printf("Enter the number of employees \t");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the Employee ID \t");
		scanf("%d",&e[i].id);
		printf("Enter the employee name \t");
		scanf("%s",e[i].name);
		printf("Enter the basic pay and other pay \t");
		scanf("%f%f",&e[i].bp,&e[i].others);
		printf("Enter the emi, tax, pf \t");
		scanf("%f%f%f",&e[i].emi,&e[i].tax,&e[i].pf);
		e[i].netsalary=(e[i].bp+e[i].others)-(e[i].emi+e[i].tax+e[i].pf);
	}
	for(i=0;i<n;i++)
	{
		printf("Name = %s \t",e[i].name);
		printf("Net Salary= %f\n",e[i].netsalary);
	}
	return 0;
}
