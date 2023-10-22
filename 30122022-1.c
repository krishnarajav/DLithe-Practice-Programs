/*Write a program in C to count a total number of duplicate elements in an array. 
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 5
element - 1 : 1
element - 2 : 1
Expected Output :
Total number of duplicate elements found in the array is : 1
*/

#include<stdio.h>
int main()
{
    int size;
    printf("Input the number of elements to be stored in the array:");
    scanf("%d", &size);
    int array[size];
    printf("Input %d elements in the array;\n");
    for(int i=0;i<size;i++)
    {
        printf("element - %d:", i);
        scanf("%d", &array[i]);
    }
    int count=0;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(array[j]==array[i])
            {
                count++;
                break;
            }
        }
    }
    printf("Total number of duplicate elements found in the array is %d", count);
    return 0;
}