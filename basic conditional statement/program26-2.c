/*26.WAP to show
i. Monday to Sunday using switch case
ii. Vowel or Consonant using switch case*/

#include<stdio.h>
int main()
{
    char characters;
    printf("\n enter the character = ");
    scanf("%c",&characters);
    switch (characters)
   {
    case 'a': 
    case 'e':
    case 'i': 
    case 'o': 
    case 'u': 
    printf("\n vowel chareacter ");
        break;
    
    default:
        printf("\n consonant character ");
    }
    
    return 0;
}