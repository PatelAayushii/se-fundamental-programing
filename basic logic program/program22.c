//22.Calculate compound interest (Compound Interest formula:
//a. Formula to calculate compound interest annually is given by:
//Amount= P(1 + R/100)t
//b. Compound Interest = Amount – P

#include<stdio.h>
int main()
{
    float amount,intrest,p,r,t;
    printf("\n enter the value of p = ");
    scanf("%f",&p);
     printf("\n enter the value of r = ");
    scanf("%f",&r);
     printf("\n enter the value of t = ");
    scanf("%f",&t);
    amount=p*(1+r/100)*t;
    intrest=amount-p;
    printf("\n enter the amount :%2f",amount);
    printf("\n enter the intrest :%2f",intrest);
   return 0;
}