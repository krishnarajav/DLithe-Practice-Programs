/*
Write a program in C to print all unique elements in an array. 
Test Data :
Print all unique elements of an array:
------------------------------------------
Input the number of elements to be stored in the array: 4
Input 4 elements in the array :
element - 0 : 3
element - 1 : 2
element - 2 : 2
element - 3 : 5
Expected Output :
The unique elements found in the array are:
3 5
*/

#include<stdio.h>
int main()
{
    int size, i, j;
    printf("Input the number of elements to be stored in the array:");
    scanf("%d", &size);
    int array[size];
    printf("Input %d elements in the array:\n");
    for(int i=0;i<size;i++)
    {
        printf("element - %d:", i);
        scanf("%d", &array[i]);
    }
    int count;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            count=0;
            if(i==j)
                continue;
            if(array[i]==array[j])
            {
                count++;
                break;
            }
        }
        if(count==0)
            printf("%d\t", array[i]);
    }
    return 0;
}