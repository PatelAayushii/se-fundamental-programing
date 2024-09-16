//11.WAP to find number is even or odd using ternary operator
#include<stdio.h>
int main()
{
    int odd,even,num;
    printf("\n enter the num = ");
    scanf("%d",&num);
     num % 2? printf("odd \n") : printf("even \n");
    return 0;
}