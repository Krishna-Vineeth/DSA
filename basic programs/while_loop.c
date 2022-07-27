#include<stdio.h>

int main (){

    int i=1,sum=0,num;
    float average;

    while(i<=5){

        printf("enter number %d: ",i);
        scanf("%d",&num);
        i++;
        sum=sum+num;
    }
    printf("the sum is :%d\n",sum);
    average = sum/5;
    printf("the average is:%f",average);
}