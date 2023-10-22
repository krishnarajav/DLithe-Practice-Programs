//Program to check the given character is alphabet or not using ternary operator 

#include<stdio.h>
int main()
{
    char character;
    scanf("%c", &character);
    (character >= 65 && character <= 90) || (character >= 97 && character <= 122) ? printf("'%c' is an Alphabet", character) : printf("'%c' is not an Alphabet", character);
    return 0;
}