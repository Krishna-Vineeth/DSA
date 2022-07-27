#include<stdio.h>
int main()
{
	int x,marks;
	
	printf("enter your marks:\n");
	scanf("%d",&marks);
	x=marks/10;
	
	switch(x){
	
		case 9:				
				printf("GRADE IS: E");
				break;
		case 8:
				printf("GRADE IS: A");
				break;
		case 7: 
				printf("GRADE IS: B");
				break;
		case 6:
				printf("GRADE IS: C");
				break;
		case 5:
				printf("GRADE IS: D");
				break;
		case 4:
				printf("FAIL");
				break;
		case 3:
				printf("FAIL");
				break;
		case 2:
				printf("FAIL");
				break;
		case 1:
				printf("FAIL");
				break;		
		case 0:
				printf("FAIL");
				break;
		default:
					if (marks==100)
					{
						printf("GRADE IS: E");
					}
					else
					{
						printf("invalid");
					}
					break;
	}
	

	return 0;
}

