//5. Check Number Is Positive or Negative

#include<stdio.h>
int main()
{

    int number;
    printf("\n enter the number = ");
    scanf("%d",&number);
    if(number>0)
    {
        printf("\n positive number" );
    }
    else if(number<0)
    {
        printf("\n nagative number =");
    }
    else
    {
        printf("\n invalid number =");
    }
    
return 0;
}