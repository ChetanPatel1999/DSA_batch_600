// 27. Write a program to take array elements from the user,replace array element with theire square.
#include <stdio.h>
void main()
{
    int n;
    printf("enter array length : ");
    scanf("%d", &n); // 5
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

    // replace array element with theire squares
    for (i = 0; i < n; i++)
    {
        arr[i] = arr[i] * arr[i];
    }

    printf("\narray square element are : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    
}