// Write a program to interchange first and last elements in an array.
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

    //{12, 7, 34, 43, 9, 23, 32, 90, 4}

    // int temp = arr[0];
    // arr[0] = arr[n - 1];
    // arr[n - 1] = temp;

    arr[0] = arr[0] + arr[n - 1];
    arr[n - 1] = arr[0] - arr[n - 1];
    arr[0] = arr[0] - arr[n - 1];

    //{12, 7, 34, 43, 9, 23, 32, 90, 4}
    printf("\nafter interchenge array element are : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}