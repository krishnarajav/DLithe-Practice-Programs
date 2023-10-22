/*Write a program in C to read any Month Number in integer and display the number of days for this month.
Test Data :
7
Expected Output :
Month have 31 days
*/

#include<stdio.h>
int main()
{
    int month, days;
    printf("Enter Month Number\n");
    scanf("%d", &month);
    if(month==2)
    {
        int year;
        printf("Enter the Year:");
        scanf("%d", &year);
        if(year%4==0)
            days=29;
        else
            days=28;
    }
    else if(month==4 || month==6 || month==9 || month==11)
        days=30;
    else    
        days=31;
    printf("Month have %d days\n\n", days);
    return 0;
}