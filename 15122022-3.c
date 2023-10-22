/*Write a program in C to read N numbers from keyboard and find their sum and average.
Sample Input
3
10
20
30

Sample Output
Sum : 60
Average : 20
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, i; 
    float *a, sum = 0, average;
    printf("Enter the number of values\n");
    scanf("%d", &n);
    printf("Enter %d values\n", n);
    a = (float *)malloc(n * sizeof(float));
    for(i=0;i<n;i++)
    {
        scanf("%f", &a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    average=sum/n;
    printf("Sum:%g\nAverage:%g\n\n", sum, average);
    return 0;
}