//Program to find biggest value of 4 numbers using ternary operator 

#include<stdio.h>
int main()
{
    float num1, num2, num3, num4, max;
    scanf("%f%f%f%f", &num1, &num2, &num3, &num4);
    max = (num1 > num2) ? ((num1 > num3) ? ((num1 > num4) ? num1 : num4) : ((num3 > num4) ? num3 : num4)) : ((num2 > num3) ? ((num2 > num4) ? num2 : num4) : ((num3 > num4) ? num3 : num4));
    printf("%g is the biggest value among 4 numbers", max);
    return 0;
}