//28.Convert years into days and months

#include<stdio.h>
int main()
{
    int days,months,years;
    printf("\n enter the years = ");
    scanf("%d",&years);
    days=years*365;
    months=years*12;
    printf("\n days = %d",days);
    printf("\n months = %d",months);
    return 0;
}