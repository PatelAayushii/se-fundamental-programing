// 1.Write a C program to accept two integers and check whether they are equal or not

#include<stdio.h>
int main()
{
    int num1,num2;
    printf("\n enter the num1 = ");
    scanf("%d",&num1);
    printf("\n enter the num2 = ");
    scanf("%d",&num2);
    if (num1==num2)
    {
        printf("\n they are equal");
    }
    else
    {
        printf("\n the are not equal");
    }
    return 0;
}