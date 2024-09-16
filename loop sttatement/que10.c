/*10.Write a program you have to make a summation of first and last Digit. (E.g.,
1234 Ans: -5)*/
#include<stdio.h>
int main()
{
    int sum=0,num,firstdigit=0,lastdigit=0;
    printf("\n enter the number =  ");
    scanf("%d",&num);
    lastdigit = num%10;
    while(num>10)
    {
       num=num/10;
    }
     firstdigit=num;
     sum=firstdigit+lastdigit;
    printf("\n first digit and last digit sum  %d",sum);
    return 0;
}