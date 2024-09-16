//24.Accept 5 employees name and salary and count average and total salary


#include<stdio.h>
int main()
{
	int salary1,salary2,salary3,salary4,salary5,totalsalary,average,i;
	char name1,name2,name3,name4,name5;
	printf("\n enter the name 1 = ");
    scanf("%s",&name1);
    printf("\n enter the name 2 = ");
    scanf("%s",&name2);
    printf("\n enter the name 3 = ");
    scanf("%s",&name3);
    printf("\n enter the name 4 = ");
    scanf("%s",&name4);
    printf("\n enter the name 5 = ");
    scanf("%s",&name5);
    printf("\n enter the first salary = ");
    scanf("%d",&salary1);
    printf("\n enter the first salary = ");
    scanf("%d",&salary2);
    printf("\n enter the first salary = ");
    scanf("%d",&salary3);
    printf("\n enter the first salary = ");
    scanf("%d",&salary4);
    printf("\n enter the first salary = ");
    scanf("%d",&salary5);
    totalsalary=salary1+salary2+salary3+salary4+salary5;
    average=totalsalary/5;
    printf("\n enter the the total salary = %d",totalsalary);
    printf("\n enter the average salary = %d",average);
	return 0;
}