//Program to print 4 values in increasing order

#include<stdio.h>
int main()
{
    float num1, num2, num3, num4, temp;
    scanf("%f%f%f%f", &num1, &num2, &num3, &num4);
    //Sorting
    if(num1 > num2)
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if(num2 > num3)
    {
        temp = num2;
        num2 = num3;
        num3 = temp;
    }
    if(num3 > num4)
    {
        temp = num3;
        num3 = num4;
        num4 = temp;
    }
    //Recheck
    if(num1 > num2)
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if(num2 > num3)
    {
        temp = num2;
        num2 = num3;
        num3 = temp;
    }
    //Recheck
    if(num1 > num2)
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    //Printing
    printf("Values in increasing order:\n%g %g %g %g\n", num1, num2, num3, num4);
    return 0;
}