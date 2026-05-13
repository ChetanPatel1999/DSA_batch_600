//  Write a program to display the array elements in reverse order.
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

    // 3 16 2 6 7
    printf("\narray element are revese order : \n");
    for (i = n-1; i >= 0; i--)//-1
    {
        printf("%d ", arr[i]); //7  6 2 16 3
    }
}