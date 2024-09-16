//20. Write a program in C to read any Month Number in integer and display the number of days for this month
#include<stdio.h>
 int main()
{
    int month;
    printf("\n enter a month number (1-12):");
    scanf("%d",&month);
    switch (month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        printf("\n 31 days in this month");
        break;
        case 4:
        case 6:
        case 9:
        case 11:
        printf("\n 30 days in this month");
        case 2:
        printf("\n this month has 28 or 29 days");
        break;
        default:
        printf("\n invalid month nuumber");

    }
    return 0;
}

