// wap to to shift all array element left side in array which have value 3.
#include <stdio.h>
void main()
{
    int arr[] = {12, 7, 3, 43, 9, 3, 32, 3, 3, 78, 75}, i;
    int n = sizeof(arr) / sizeof(int);
    printf("array element are : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    int index = 0, temp;
    // 0   1   2  3    4   5  6   7  8  9   10
    // 3,  3,  12, 43, 9,  7, 32, 3, 3, 78, 7
    for (i = 0; i < n; i++) // 7
    {

        if (arr[i] == 3)
        {
            temp = arr[i];
            arr[i] = arr[index];
            arr[index] = temp;
            index++; // 2
        }
    }
    printf("\narray element are after shifting : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}