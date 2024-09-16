/*26.WAP to show
i. Monday to Sunday using switch case
ii. Vowel or Consonant using switch case */
#include<stdio.h>
int main()
{
    int days;
    printf("\n enter the day (1-7) = ");
    scanf("%d",&days);
    switch (days)
    {
    case 1: printf("\n monaday");
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
    default:
        printf("\n enter day in 1 to 7");
    }
    return 0;
}