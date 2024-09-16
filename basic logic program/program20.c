//20.Accept monthly salary from the user and deduct 10% insurance premium,10% loan installment find out of remaining salary
#include<stdio.h>
int main()
{
    float monthly_salary,loan_installment,remaining_salary,insurance_premium;
    printf("\n enter your monthaly salary: = ");
    scanf("%f",&monthly_salary);
    loan_installment = monthly_salary*0.1;
    insurance_premium=monthly_salary*0.1;
    remaining_salary=monthly_salary-loan_installment-insurance_premium;
    printf("\n remaining_salary after deducting the loan installment:%.2f", remaining_salary);
    return 0;
}