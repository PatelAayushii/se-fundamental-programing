// 3. WAP to check if the given year is a leap year or not.
#include<stdio.h>
int main()
{
    int year,leapyear;
printf("\n enter the year = ");
scanf("%d",&year);
if(year%4==0)
{
    printf("\n given year is leap year");
}

else
{
    printf("\n given year is not leap year");
}
    return 0;
}