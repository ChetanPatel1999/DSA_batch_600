// Write a program to reverse all elements of an array without using any extra array.
#include <stdio.h>
void main()
{
    int arr[] = {12, 7, 34, 43, 9, 23, 32}, i;
    int n = sizeof(arr) / sizeof(int);
    printf("array element are : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    // 0   1   2   3  4   5  6
    // 32, 23, 9, 43, 34, 7, 12
    // logic for reverse array element in same array
    int temp;                     // n= 7
    for (i = 0; i < (n / 2); i++) // 3
    {
        temp = arr[i]; // 34
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    printf("\narray element are after reverse : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}