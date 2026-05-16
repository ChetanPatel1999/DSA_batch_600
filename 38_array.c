// . Write a program to take array elements from the user and count the total number of elements that
// appear more than once in the array (duplicate elements count).
#include <stdio.h>
void main()
{
    int arr[] = {2, 4, 6, 4, 7, 6, 8, 9, 4, 2, 2, 66, 7}, i;
    int n = sizeof(arr) / sizeof(int);
    printf("array element are : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    int c = 0, j;
    // 0  1  2   3  4   5  6  7   8   9  10   11   12
    // 2, 4, 6, -1, 7, -1, 8, 9, -1, -1, -1,  66,  7
    for (i = 0; i < n; i++) // i = 2
    {
        if (arr[i] != -1)
        {
            for (j = i + 1; j < n; j++) // j= 5
            {
                if (arr[i] == arr[j])
                {
                    c++;// 5
                    arr[j] = -1;
                }
            }
        }

    }
    printf("\ntotal duplicate element in array : %d", c);
}