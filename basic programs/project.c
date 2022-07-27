#include<stdio.h>
void menu_card();
void choice();
int fast_foods();
int milk_shakes();
int cool_drinks();

int main()
{
	printf("\t\t=======KALASALINGAM RESTAURANT=======\n");
	char menu;
	printf("\t\t.......ENTER STAR FOR MENU CARD.......\n");
	menu_card();
	
}

void menu_card()
{
	char menu;
	scanf("%s",&menu);
	switch(menu)
	{
		case '*' :
					
					your_choice();
					break;
			
		default :
					printf("PLEASE TRY AGAIN");
					printf("\t\t.......ENTER STAR FOR MENU CARD.......\n");
					menu_card();
					your_choice();
					break;
	}
	
}

void your_choice()
{
	int choice,total_amount;
	char choice1;
	printf("\t\t\t......MENU CARD......\n");
	printf("\t\t1.FAST FOODS\n");
	printf("\t\t2.MILK SHAKES\n");
	printf("\t\t3.COOL DRINKS\n");
	printf("enter your choice\n");
	scanf("%d",&choice);

					if(choice==1)
					{
						total_amount=fast_foods();
						printf("total amount to be paid = %d\n",total_amount);
						printf("\n\n\n\nwant to buy more....\n");
						printf("press 1.yes 2.no \n");
						scanf("%d",&choice1);
						if(choice1==1)
						{
							your_choice();
						}
						else
						{
							printf("THANK YOU\n");
							printf("PLEASE VISIT AGAIN");
						}
					}
					else if(choice==2)
					{             
						total_amount=milk_shakes();
						printf("total amount to be paid = %d",total_amount);
						printf("\n\n\n\nwant to buy more....\n");
						printf("press 1.yes 2.no \n");
						scanf("%d",&choice1);
						if(choice1==1)
						{
							your_choice();
						}
						else
						{
							printf("THANK YOU\n");
							printf("PLEASE VISIT AGAIN");
						}
					}
					else if(choice==3)
					{             
						total_amount=cool_drinks();
						printf("total amount to be paid = %d",total_amount);
						printf("\n\n\n\nwant to buy more....\n");
						printf("press 1.yes 2.no \n");
						scanf("%d",&choice1);
						if(choice1==1)
						{
							your_choice();
						}
						else
						{
							printf("THANK YOU\n");
							printf("PLEASE VISIT AGAIN");
						}
					}
					else
					{
						printf("PLEASE TRY AGAIN\n");
						your_choice();
					}
}

int fast_foods()
{
	printf("\t\t\t......FAST FOODS......\n");
	printf("\t\t1.PIZZA\n");
	printf("\t\t2.BURGER\n");
	printf("\t\t3.NOODLES\n");
	printf("\t\t4.FRENCH FRIES\n");
	
	int choice,amount,quantity;
	char size;	
	printf("enter your choice :\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1 :
				printf("\t\t\t......PIZZA......\n");
				printf("ENTER SIZE\n");
				scanf("%s",&size);
				if(size=='s')
				{
					printf("ENTER QUANTITY\n");
					scanf("%d",&quantity);
					printf("you selected small size\n");
					printf("each piece costs 50 rupees\n");
					amount = quantity*50;
					printf("%d",amount);
				}
				else if(size=='m')
				{
					printf("ENTER QUANTITY\n");
					scanf("%d",&quantity);
					printf("you selected medium size\n");
					printf("each piece costs 60 rupees\n");
					amount = quantity*60;	
				}
				else if(size=='l')
				{
					printf("ENTER QUANTITY\n");
					scanf("%d",&quantity);
					printf("you selected large size\n");
					printf("each piece costs 70 rupees\n");
					amount = quantity*70;
				}
				else
				{
					printf("PLEASE TRY AGAIN");
					fast_foods();
				}
				break;
		case 2 :
				printf("\t\t\t......BURGER......\n");
				printf("ENTER SIZE\n");
				scanf("%c",&size);
				if(size=='s')
				{
					printf("ENTER QUANTITY\n");
					scanf("%d",&quantity);
					printf("you selected small size\n");
					printf("each piece costs 60 rupees\n");
					amount = quantity*60;
				}
				else if(size=='m')
				{
					printf("ENTER QUANTITY\n");
					scanf("%d",&quantity);
					printf("you selected medium size\n");
					printf("each piece costs 70 rupees\n");
					amount = quantity*70;	
				}
				else if(size=='l')
				{
					printf("ENTER QUANTITY\n");
					scanf("%d",&quantity);
					printf("you selected large size\n");
					printf("each piece costs 80 rupees\n");
					amount = quantity*80;
				}
				else
				{
					printf("PLEASE TRY AGAIN");
					fast_foods();
				}
				break;
		case 3 :
				printf("\t\t\t......NOODLES......\n");
				printf("each costs 80 rupees\n");
				printf("ENTER QUANTITY\n");
				scanf("%d",&quantity);
				
				amount=quantity*80;
				break;
		case 4 :
				printf("\t\t\t......FRENCH FRIES......\n");
				printf("each costs 60 rupees\n");
				printf("ENTER QUANTITY\n");
				scanf("%d",&quantity);
				
				amount=quantity*60;
				break;
		default :
				printf("PLEASE TRY AGAIN\n");
				fast_foods();
				break;
	}
	return amount;
}
int milk_shakes()
{
	printf("\t\t\t......MILK SHAKES......\n");
	printf("\t\t1.CHOCOLATE\n");
	printf("\t\t2.STRAWBERRY\n");
	printf("\t\t3.VANILLA\n");
	printf("\t\t4.BUTTERSCOTH\n");
	
	int choice,amount,quantity;	
	printf("enter your choice :\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1 :
				printf("\t\t\t......CHOCOLATE......\n");
				printf("PLEASE ENTER QUANTITY\n");
				printf("each costs 80 rupees\n");
				scanf("%d",&quantity);
				amount=quantity*80;
				break;
		case 2 :
				printf("\t\t\t......STRAWBERRY......\n");
				printf("PLEASE ENTER QUANTITY\n");
				printf("each costs 70 ruppes\n");
				scanf("%d",&quantity);
				amount=quantity*70;
				break;
		case 3 :
				printf("\t\t\t......VANILLA......\n");
				printf("PLEASE ENTER QUANTITY\n");
				printf("each costs 80 rupees\n");
				scanf("%d",&quantity);
				amount=quantity*60;
				break;
		case 4 :
				printf("\t\t\t......BUTTERSCOTCH......\n");
				printf("PLEASE ENTER QUANTITY\n");
				printf("each costs 90 rupees\n");
				scanf("%d",&quantity);
				amount=quantity*90;
				break;
		default :
				printf("PLEASE TRY AGAIN\n");
				milk_shakes();
	}
	return amount;
}
int cool_drinks()
{
	printf("\t\t\t......COOL DRINKS......\n");
	printf("\t\t1.SPRITE\n");
	printf("\t\t2.THUMBSUP\n");
	printf("\t\t3.COCO COLA\n");
	printf("\t\t4.MAZZA\n");
	
	int choice,amount,quantity;
	char size;	
	printf("enter your choice :\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1 :
				printf("\t\t\t......SPRITE......\n");
				
				printf("ENTER SIZE\n");
				scanf("%s",&size);
				if(size=='s')
				{
					printf("ENTER QUANTITY\n");
					scanf("%d",&quantity);
					printf("you selected small size\n");
					printf("each costs 50 rupees\n");
					amount = quantity*50;
				}
				else if(size=='m')
				{
					printf("ENTER QUANTITY\n");
					scanf("%d",&quantity);
					printf("you selected medium size\n");
					printf("each costs 60 rupees\n");
					amount = quantity*60;	
				}
				else if(size=='l')
				{
					printf("ENTER QUANTITY\n");
					scanf("%d",&quantity);
					printf("you selected large size\n");
					printf("each costs 70 rupees\n");
					amount = quantity*70;
				}
				else
				{
					printf("PLEASE TRY AGAIN");
					cool_drinks();
				}
				break;
		case 2 :
				printf("\t\t\t......THUMBSUP......\n");
				printf("ENTER SIZE\n");
				scanf("%s",&size);
				if(size=='s')
				{
					printf("ENTER QUANTITY\n");
					scanf("%d",&quantity);
					printf("you selected small size\n");
					printf("each costs 60 rupees\n");
					amount = quantity*60;
				}
				else if(size=='m')
				{
					printf("ENTER QUANTITY\n");
					scanf("%d",&quantity);
					printf("you selected medium size\n");
					printf("each costs 70 rupees\n");
					amount = quantity*70;	
				}
				else if(size=='l')
				{
					printf("ENTER QUANTITY\n");
					scanf("%d",&quantity);
					printf("you selected large size\n");
					printf("each costs 80 rupees\n");
					amount = quantity*80;
				}
				else
				{
					printf("PLEASE TRY AGAIN");
					cool_drinks();
				}
				break;
		case 3 :
				printf("\t\t\t......COCO COLA......\n");
				printf("ENTER SIZE\n");
				scanf("%s",&size);
				if(size=='s')
				{
					printf("ENTER QUANTITY\n");
					scanf("%d",&quantity);
					printf("you selected small size\n");
					printf("each costs 60 rupees\n");
					amount = quantity*60;
				}
				else if(size=='m')
				{
					printf("ENTER QUANTITY\n");
					scanf("%d",&quantity);
					printf("you selected medium size\n");
					printf("each costs 70 rupees\n");
					amount = quantity*70;	
				}
				else if(size=='l')
				{
					printf("ENTER QUANTITY\n");
					scanf("%d",&quantity);
					printf("you selected large size\n");
					printf("each costs 80 rupees\n");
					amount = quantity*80;
				}
				else
				{
					printf("PLEASE TRY AGAIN");
					cool_drinks();
				}
				break;
		case 4 :
				printf("\t\t\t......MAZZA......\n");
				printf("ENTER SIZE\n");
				scanf("%s",&size);
				if(size=='s')
				{
					printf("ENTER QUANTITY\n");
					scanf("%d",&quantity);
					printf("you selected small size\n");
					printf("each costs 60 rupees\n");
					amount = quantity*60;
				}
				else if(size=='m')
				{
					printf("ENTER QUANTITY\n");
					scanf("%d",&quantity);
					printf("you selected medium size\n");
					printf("each costs 70 rupees\n");
					amount = quantity*70;	
				}
				else if(size=='l')
				{
					printf("ENTER QUANTITY\n");
					scanf("%d",&quantity);
					printf("you selected large size\n");
					printf("each costs 80 rupees\n");
					amount = quantity*80;
				}
				else
				{
					printf("PLEASE TRY AGAIN");
					cool_drinks();
				}
				break;
		default :
				printf("PLEASE TRY AGAIN\n");
				cool_drinks();
	}
	return amount;
}


 