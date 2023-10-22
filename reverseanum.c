//Program to reverse a number

#include<stdio.h>
int main()
{
    long int num, rev=0;
    int len;
    scanf("%ld%n", &num, &len);
    while(rev = rev * 10 + num % 10, num /= 10);
    printf("%0*ld", len, rev);
    return 0;
}