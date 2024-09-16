//17.Calculate person’s insurance premium based on salary
#include<stdio.h>
int main()
{
    float salary,insurancepreamium, insuranceperancentage = 0.20;
     
    //assuming 10%insurance premimum

    printf("\n enter the salary");
    scanf("%f",&salary);
   insurancepreamium = salary*insuranceperancentage;

   printf("\ninsurancepreamium: %.2f",insurancepreamium);
    return 0;
}