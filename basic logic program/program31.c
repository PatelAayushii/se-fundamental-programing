//31.Convert kilometers into meters

#include<stdio.h>
int main()
{
    float kilometers,meters;
    printf("\n enter the value of kilometers = ");
    scanf("%f",&kilometers);
    meters=kilometers*1000;
    printf("\n kilometer %.2f",kilometers);
    printf("\n meter %.2f",meters);

    return 0;
}