/*15. Write a C program to determine eligibility for admission to a professional
course based on the following criteria
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks
in Chem>=50 and Total in all three subject >=190 or Total in Maths and
Physics >=140 --------------------------------------Input the marks obtained in
Physics :65 Input the marks obtained in Chemistry :51 Input the marks
obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry :
188 Total marks of Maths and Physics : 137 The candidate is not eligible.*/

#include<stdio.h>
int main()
{
    int  maths,phy,cham,total;
    printf("\n enter the maths marks = ");
    scanf("%d",&maths);
    printf("\n enter the phy marks = ");
    scanf("%d",&phy);
    printf("\n enter the cham marks = ");
    scanf("%d",&cham);
    if(maths>=65 && phy>=55 && cham>=50 && total >=190 || maths && phy>=140)
    {
        printf("\n the candidate is eligible");
    }
    else
    {
        printf("\n the candidate is not eligible");
    }

    return 0;
}