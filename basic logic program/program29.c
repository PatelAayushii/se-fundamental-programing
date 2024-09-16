//29.Convert minutes into seconds and hours

#include<stdio.h>
int main()
{
    int hours,minute,second;
    printf("\n enter the minute = ");
    scanf("%d",&minute);
    second=minute*60;
    hours=minute/60;
    printf("\n second = %d",second);
    printf("\n hours = %d",hours);
    return 0;
}