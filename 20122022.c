/*Problem: you are given a number, and you have to extract the key by finding the difference between the sum of the even and odd numbers of the input.
Test Case :
Input : 24319587
Output :  11

Explanation : 
odd terms : 3 + 1 + 9 + 5 + 7 = 25
even terms : 2 + 4 + 8 = 14
output : 11 (25-14)
*/

#include<stdio.h>
int main()
{   
    long int number;
    int rem, key, even=0, odd=0;
    scanf("%ld", &number);
    while(number!=0)
    {
        rem=number%10;
        if(rem%2==0)
            even=even+rem;
        else 
            odd=odd+rem;
        number=number/10;
    }
    if(odd>even)
        key=odd-even;
    else
        key=even-odd;
    printf("%d", key);
    return 0;
}