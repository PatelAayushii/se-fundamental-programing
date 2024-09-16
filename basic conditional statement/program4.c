/*4. WAP to make simple calculator (operation include Addition, Subtraction,
Multiplication, Division, modulo) using conditional statement*/
#include<stdio.h>
int main()
{

    int num1,num2,ans;
    char choice;
    printf("\n enter the numbar num 1 = " );
    scanf("%d",&num1);
    printf("\n enter the numbar num 2 = " );
    scanf("%d",&num2);
    printf("\n '+'-----> addition");
    printf("\n '-'-----> substraction");
    printf("\n '*'-----> multiplication");
    printf("\n '/'-----> division");
    printf("\n '%%'-----> modulo");
    printf("enter your choice: ");
    scanf(" %c",&choice);
    if(choice=='+')
    {
        printf("\n addition ans = %d ",ans=num1+num2);
        
    }
    else if(choice=='-')
    {
        printf("\n substriction ans = %d ",ans=num1-num2);
    }
    else if(choice=='*')
    {
        printf("\n multiplication ans = %d ",ans=num1*num2);
    }
    else if(choice=='/')
    {
        printf("\n division ans = %d ",ans=num1/num2);
    }
    else if(choice=='%')
    {
        printf("\n modulo ans = %d ",ans=num1%num2);
    }
    else
    {
        printf("\n invalid input ");
    }
  

return 0;
}