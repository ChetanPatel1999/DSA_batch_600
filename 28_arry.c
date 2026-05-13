// . Write a program to take array elements from the user, store their squares in a new array, and display the
// new array.
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

    // copy one array element square in another array
    for (i = 0; i < n; i++)
    {
        copyArr[i] = arr[i] * arr[i];
    }

    printf("array element are : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\ncopy array element are : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", copyArr[i]);
    }
}