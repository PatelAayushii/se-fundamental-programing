//22. WAP to input the week number and print week day.
#include<stdio.h>
int main()
{
    int weekday;
    printf("\n enter the week number (1-7)= ");
    scanf("%d",&weekday);
    switch(weekday)
    {
        case 1: printf("\n monday");
        break;
         case 2: printf("\n tuesday");
        break;
         case 3: printf("\n wednesday");
        break;
         case 4: printf("\n thursday");
        break;
         case 5: printf("\n friday");
        break;
         case 6: printf("\n saturday");
        break;
         case 7: printf("\n sunday");
        break;
        default: printf("\n invalid input ");
        }
       

    return 0;
}