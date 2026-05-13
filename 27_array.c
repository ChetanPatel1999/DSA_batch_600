// 27. Write a program to take array elements from the user, add 5 to each element, store the results in a new
// array, and display the new array.
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

    // copy one array into another array
    for (i = 0; i < n; i++)
    {
        copyArr[i] = arr[i] + 5;
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