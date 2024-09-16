//12.Accept number of students from user. I need to give 5 apples to each student. How many apples are required
#include<stdio.h>
int main()
{
    int student,apple=5,total;
    printf("\n enter the student from user ");
    scanf("%d",&student);
    total=student*apple;
    printf("\n enter the total number :%d ",total);


    return 0;
    
}