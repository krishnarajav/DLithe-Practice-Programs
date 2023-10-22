//Program to check whether the given date is valid or not

#include<stdio.h>
int main()
{
    int date, month, year; 
    printf("Enter date as DD MM YYYY:");
    scanf("%d%d%d", &date, &month, &year);
    if((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && (date >= 1 && date <=31)) //Check for Jan/Mar/May/Jul/Aug/Oct/Dec
    {
        printf("Given date is valid\n");
    }
    else if((month == 4 || month == 6 || month == 9 || month == 11) && (date >= 1 && date <=30)) //Check for Apr/Jun/Sep/Nov
    {
        printf("Given date is valid\n");
    }
    else if((month == 2) && (year % 4 != 0) && (date >= 01 && date <=28)) //Check for month Feb
    {
        printf("Given date is valid\n");
    }
    else if((month == 2) && (year % 4 == 0) && (date >= 01 && date <=29)) //Check for month Feb and leap year
    {
        printf("Given date is valid\n");
    }
    else 
    {
        printf("Given date is Invalid\n");
    }
}
