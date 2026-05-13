// wap to find max element from array.
#include <stdio.h>
void main()
{
    int arr[] = {12, 666, 34, 78, 9, 823, 55, 78, 190}, i;
    int n = sizeof(arr) / sizeof(int);

    printf("array element are : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    // 0   1   2  3   4  5
    // 12, 6, 34, 78, 9, 23
    int max = arr[0];       // 12
    for (i = 1; i < n; i++) // 5
    {
        if (max < arr[i])
        {
            max = arr[i]; // 78
        }
    }
    printf("\nmax element : %d", max);
}