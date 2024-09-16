//24.Accept the input month number and print number of days in that month.
#include<stdio.h>
int main()
{
    int monthname;
    printf("\n enter the month number(1-12) = ");
    scanf("%d",&monthname);
    switch (monthname)
    {
    case 1 : printf("\n january has 31 days");
        break;
    case 2 : printf("\n february has 29 or 28  days");
        break;
    case 3 : printf("\n march has 31 days");
        break;
    case 4 : printf("\n April has 30 days");
        break;
    case 5 : printf("\n may has 31 days");
        break;
    case 6 : printf("\n june has 30 days");
        break;
    case 7 : printf("\n july has 31 days");
        break;
    case 8 : printf("\n august has 31 days");
        break;
    case  9: printf("\n september has 30 days");
        break;
    case 10 : printf("\n octomber has 31 days");
        break;
    case 11 : printf("\n navember has 30 days");
        break;
    case 12 : printf("\n december has 31 days");
        break;
    default:
        printf("\n invalid input ");
       
    }
    return 0;
}