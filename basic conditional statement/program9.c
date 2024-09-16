//9. C Program to Check Uppercase or Lowercase or Digit or Special Character

#include<stdio.h>
int main()
{
    char ch;
    printf("\n enter the character = ");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
    {
        printf("\n%c is uppper case",ch);
    }
    else if(ch>='A' && ch<='Z')
    {
        printf("\n%c is lower case",ch);
    }
    else if( ch >= '0' && ch <='9')
    {
        printf("\n digit",ch);
    }
    else
    {
        printf("\n special character",ch);
    }
    return 0;
}

