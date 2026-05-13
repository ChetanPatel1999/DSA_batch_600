// . Write a program to print squares of all numbers present in a given array.
#include <stdio.h>
void main()
{
    int n;
    printf("enter array length : ");
    scanf("%d", &n); // 10
    int arr[n];
    int i;
    printf("enter array element : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("array element are : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\narray element squares are : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i] * arr[i]);
    }
}