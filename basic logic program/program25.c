//25.Accept 5 expense from user and find average of expense
#include<stdio.h>
int main ()
{
   float expence1,expence2,expence3,expence4,expence5,average;
   printf("\n enter the expence 1 = ");
   scanf("%f",&expence1);
    printf("\n enter the expence 2 = ");
   scanf("%f",&expence2);
    printf("\n enter the expence 3 = ");
   scanf("%f",&expence3);
    printf("\n enter the expence 4 = ");
   scanf("%f",&expence4);
    printf("\n enter the expence 5 = ");
   scanf("%g",&expence5);
    average=(expence1+expence2+expence3+expence4+expence5)/5;
    printf("\n enter the average expence : %f",average);
     return 0;
}