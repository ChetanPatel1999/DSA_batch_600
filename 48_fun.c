#include <stdio.h>
void display(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++) // 1
    {
        printf("%d ", arr[i]);
    }
}

void inputArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}
void main()
{
    int arr1[3];
    int arr2[5];
    int arr3[7];
    printf("enter arr1 elements :\n");
    inputArray(arr1, 3);

    printf("arr1 elements are : \n");
    display(arr1, 3);

    printf("\nenter arr2 elements :\n");
    inputArray(arr2, 5);

    printf("\narr2 elements are : \n");
    display(arr2, 5);

    printf("\nenter arr3 elements :\n");
    inputArray(arr3, 7);

    printf("\narr3 elements are : \n");
    display(arr3, 7);
}