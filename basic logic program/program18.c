//18.Calculate person’s Annual salary
#include<stdio.h>
int main()
{
    int annualsalary,monthalysalary;
    printf("\n enter the monthaly salary: ");
    scanf("%d",&monthalysalary);
    annualsalary=monthalysalary*12;
    printf("\n enter the annual salary:  %d",annualsalary);
    return 0;
}