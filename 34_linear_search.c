// . Write a program to check (search) given number is present or not present in array , using Linear
// search.
#include <stdio.h>
void main()
{
    int arr[] = {12, 7, 34, 43, 9, 23, 32, 90, 4}, i;
    int n = sizeof(arr) / sizeof(int);

    printf("array element are : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    int num;
    printf("\nenter number to serach in array : ");
    scanf("%d", &num);
    int f = 0;
    // 12, 7, 34, 43, 9, 23, 32, 90, 46

    for (i = 0; i < n; i++) // 2
    {
        if (num == arr[i])
        {
            f = 1;
            break;
        }
    }

    if (f == 1)
    {
        printf("\nnum is find");
    }
    else
    {
        printf("\nnum is not find");
    }
}