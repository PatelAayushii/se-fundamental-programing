//10.WAP to check whether a number is negative, positive or zero.

#include<stdio.h>
int main()
{
    int number;
    printf("\n enter the number = ");
    scanf("%d",&number);
    if(number>0)
    {
        printf("\n positive number");
    }
    else if(number<0)
    {
        printf("\n nagative number ");
    }
    else
    {
        printf("\n zero ");
    }
    return 0;
}



