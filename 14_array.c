// array example
#include <stdio.h>
void main()
{
    int arr[] = {12, 34, 56, 78, 90}, i;
    printf("array element are : \n");
    for (i = 0; i < 5; i++) // 1
    {
        printf("%d   ", arr[i]);
    }

    arr[3] = 800;

    printf("\narray element after change are : \n");
    for (i = 0; i < 5; i++) // 1
    {
        printf("%d   ", arr[i]);
    }
}