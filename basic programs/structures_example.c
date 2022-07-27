// 9921004803 - krishna vineeth
#include<stdio.h>
int main()
{
	struct student 
	{
		char name[50];
		int reg_num;
		float avg;
		int sum;
		int marks[50];
	}s[50];
	int n1,n2,i,j;
	printf("enter number of students :\n");
	scanf("%d",&n1);
	printf("enter number of subjects :\n");
	scanf("%d",&n2);
	for(i=0;i<n1;i++)
	{
	printf("Enter the register number\n");
	scanf("%d",&s[i].reg_num);
	printf("Enter your name\n");
	scanf("%s",s[i].name);
	}
	
	for(i=0;i<n1;i++)
	{
		printf("\nenter student%d marks :\n",i+1);
		for(j=0;j<n2;j++)
		{
			printf("subject%d:\n",j+1);
		scanf("%d",&s[i].marks[j]);
		s[i].sum+=s[i].marks[j];
		s[i].avg=s[i].sum/n2;
		}
		printf("\ntotal sum =%d\n",s[i].sum);
		printf("\naverage = %f\n",s[i].avg);
	}
	return 0;
}