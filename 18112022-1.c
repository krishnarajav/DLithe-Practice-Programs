//Program to check the given number is multiple of 5 or not using ternary operator

#include<stdio.h>
int main()
{
    int number;
    scanf("%d", &number);
    (number % 5 == 0) ? printf("%d is a multiple of 5", number) : printf("%d is not a multiple of 5", number);
    return 0;
}