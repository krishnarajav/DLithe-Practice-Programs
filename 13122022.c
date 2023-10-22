/*Write a C program to find the eligibility of admission for a professional course based on the following criteria:

Eligibility Criteria : 
Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 
and Total in all three subject >=190 or 
Total in Maths and Physics >=140

Input :
Physics :65
Chemistry :51
Mathematics :72 

Output:
The candidate is not eligible for admission.
*/

#include<stdio.h>
int main()
{
    int marks1, marks2, marks3;
    printf("Physics :");
    scanf("%d", &marks1);
    printf("Chemistry :");
    scanf("%d", &marks2);
    printf("Mathematics :");
    scanf("%d", &marks3);
    if((marks3 >= 65) && (marks1 >= 55) && (marks2 >= 50) && (((marks1 + marks2 + marks3) >= 190) || (marks3 + marks1) >= 140))
        printf("The candidate is eligible for admission.\n\n");
    else
         printf("The candidate is not eligible for admission.\n\n");
}