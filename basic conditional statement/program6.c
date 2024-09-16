//6. Find the Character Is Vowel or Not

#include<stdio.h>
int main()
{
    char character;
    printf("\n enter the character = ");
    scanf("%d",&character);
    if(character=='a','e','i','o','u')
    {
        printf("\n character is vowel %c");
    }
    else
    {
        printf("\n character is not vowel %c");
    }
    return 0;
}