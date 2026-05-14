//  Write a program to input elements into an array and divide them into two separate arrays — one
// containing even numbers and the other containing odd numbers.
#include <stdio.h>
void main()
{
    int arr[] = {12, 66, 34, 78, 9, 82, 55, 75, 19}, i;
    int n = sizeof(arr) / sizeof(int); // 9
    printf("array element are : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    int evenArr[n], oddArr[n];
    int evenIndex = 0, oddIndex = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenArr[evenIndex] = arr[i];
            evenIndex++;
        }
        else
        {
            oddArr[oddIndex] = arr[i];
            oddIndex++;
        }
    }

    printf("\neven array element are : \n");
    for (i = 0; i < evenIndex; i++)
    {
        printf("%d ", evenArr[i]);
    }
    printf("\nodd array element are : \n");
    for (i = 0; i < oddIndex; i++)
    {
        printf("%d ", oddArr[i]);
    }
}