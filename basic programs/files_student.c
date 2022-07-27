// 9921004803 - krishna vineeth
#include<stdio.h>
int main()
{
	char name[50];
	int marks,i,num;
	
	printf("enter number of students:\n");
	scanf("%d",&num);
	
	FILE *p;
	p=fopen("student.txt","w");
	if(p==NULL)
	{
		printf("error");
	}
	else
	{
		for(i=0;i<num;i++)
		{
			printf("enter name of the student:\n");
			scanf("%s",&name);
			printf("enter marks of student:\n");
			scanf("%d",&marks);
			fprintf(p,"\n name = %s\n marks = %d",name,marks);
		}
	}
	fclose(p);
	return 0;
}