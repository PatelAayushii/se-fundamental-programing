/*8. Write a program to find out the max from given number (E.g., No: -15621
Max number is 6)*/


#include<stdio.h>
int main()
{
    int num,max=0,rem;
    printf("\n enter the number = ");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        if(rem>max)
        {
           max=rem;
        } 
        num=num/10;
    }
    printf("\n max number: %d ",max);

    return 0;
}