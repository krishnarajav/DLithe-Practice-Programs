/*Write a program in C to read any digit, display in the word.
Test Data :
4
Expected Output :
Four
*/

#include<stdio.h>
int main()
{
    float digit;
    printf("Input value\n");
    scanf("%f", &digit);
    int x=digit;
    if(x==digit)
    {
    switch(x)
    {
    case 0: printf("Zero\n\n"); break;
    case 1: printf("One\n\n"); break;
    case 2: printf("Two\n\n"); break;
    case 3: printf("Three\n\n"); break;
    case 4: printf("Four\n\n"); break;
    case 5: printf("Five\n\n"); break;
    case 6: printf("Six\n\n"); break;
    case 7: printf("Seven\n\n"); break;
    case 8: printf("Eight\n\n"); break;
    case 9: printf("Nine\n\n"); break;
    default: printf("Invalid Digit/It's a number\n\n");
    }
    }
    else
        printf("Invalid Entry/It's a number\n\n");
    return 0;
}