// . Write a program to copy elements from one array to another.
#include <stdio.h>
void main()
{
    int n;
    printf("enter array length : ");
    scanf("%d", &n); // 5
    int arr[n], copyArr[n];
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

    // copy one array into another array
    for (i = 0; i < n; i++)
    {
        copyArr[i] = arr[i];
    }

    printf("\ncopy array element are : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", copyArr[i]);
    }
}