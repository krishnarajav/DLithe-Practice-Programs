//Program to check the given number is positive / negative / zero

#include<stdio.h>
int main()
{
    float number;
    scanf("%f", &number);
    (number > 0) ? printf("Number is Positive") : (number < 0) ? printf("Number is Negative") : printf("Number is Zero");
    return 0;
}