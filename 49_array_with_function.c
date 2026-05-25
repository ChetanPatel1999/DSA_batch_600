#include <stdio.h>
void display(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++) // 1
    {
        printf("%d ", arr[i]);
    }
}

int maxElement(int arr[], int n)
{
    int max = arr[0], i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
void main()
{
    int arr1[5] = {4, 66, 13, 7, 8};
    int arr2[8] = {5, 689, 23, 4, 66, 13, 7, 8};
    printf("arr1 element are : \n");
    display(arr1, 5);
    printf("\narr1 max element : %d\n", maxElement(arr1, 5));
    printf("\narr2 element are : \n");
    display(arr2, 8);
    printf("\narr2 max element : %d\n", maxElement(arr2, 8));
}