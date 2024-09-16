//2. Write a program to make Simple calculator (to make addition, subtraction,multiplication, division and modulo)
#include<stdio.h>
int main()
{
     int num1,num2;
    //addition 
    printf("\n enter the value of num1 = ");
    scanf("%d",&num1);
    printf("\n enter the value of num2 = ");
    scanf("%d",&num2);
    printf("\n the addition of %d and %d is %d",num1,num2,num1+num2);

    //substraction
    printf("\n enter the value of num1 = ");
    scanf("%d",&num1);
    printf("\n enter the value of num2 = ");
    scanf("%d",&num2);
    printf("\n the substraction of %d and %d is %d",num1,num2,num1-num2);

    //multipication
    printf("\n enter the value of num1 = ");
    scanf("%d",&num1);
    printf("\n enter the value of num2 = ");
    scanf("%d",&num2);
    printf("\n the multipication of %d and %d is %d",num1,num2,num1*num2);

    //division
    printf("\n enter the value of num1 = ");
    scanf("%d",&num1);
    printf("\n enter the value of num2 = ");
    scanf("%d",&num2);
    printf("\n the division of %d and %d is %d",num1,num2,num1/num2);


    //modulo
    printf("\n enter the value of num1 = ");
    scanf("%d",&num1);
    printf("\n enter the value of num2 = ");
    scanf("%d",&num2);
    printf("\n the modulo of %d and %d is %d",num1,num2,num1%num2);
    return 0;
    
    
    
}