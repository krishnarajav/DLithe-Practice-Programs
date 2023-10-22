//Program to check whether the given day is valid or not

#include<stdio.h>
int main()
{
    int day, month, year; 
    printf("Enter date as DD MM YYYY:");
    scanf("%d%d%d", &day, &month, &year);
    if((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && (day >= 1 && day <=31)) //Check for Jan/Mar/May/Jul/Aug/Oct/Dec
    {
        printf("Given date is valid\n");
    }
    else if((month == 4 || month == 6 || month == 9 || month == 11) && (day >= 1 && day <=30)) //Check for Apr/Jun/Sep/Nov
    {
        printf("Given date is valid\n");
    }
    else if((month == 2) && (year % 4 != 0) && (day >= 01 && day <=28)) //Check for month Feb
    {
        printf("Given date is valid\n");
    }
    else if((month == 2) && (year % 4 == 0) && (day >= 01 && day <=29)) //Check for month Feb and leap year
    {
        printf("Given date is valid\n");
    }
    else 
    {
        printf("Given date is Invalid\n");
    }
}
