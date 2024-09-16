//2. WAP to accept 5 numbers from user and display all numbers
#include<stdio.h>
int main()
{
    int num[5],i;
    for(i=0;i<5;i++)
    {
        printf("\n enter the number (1-5)= ");
        scanf("%d",&num[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("\n%d",num[i]);
    }
    return 0;
}