//30.WAP to convert years into days and days into years

#include<stdio.h>
int main()
{
    float day,year,copy;
    printf("\n enter the days = ");
    scanf("%f",&day);
    printf("\n enter the year = ");
    scanf("%f",&year);
    copy=year;
    year=day/365;
    day=copy*365;
    printf("\n days in to the years = %2.f",year);
    printf("\n years in to the days = %2.f",day);

    return 0;
}