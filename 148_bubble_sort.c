#include <stdio.h>
void display(int arr[], int n)
{
    int i;
    printf("array element are : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void bubbleSort(int arr[], int n)
{
    // 0     1  2  3   4   5  6
    // 4,    6, 8,10, 12, 20, 45
    int i, j, swaped;
    for (i = 0; i < n - 1; i++) // 6
    {
        swaped = 0;
        for (j = 0; j < (n - 1) - i; j++) // 1
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j]; // 10
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swaped = 1;
            }
        }
        if (swaped == 0)
        {
            break;
        }
    }
}
void main()
{
    int arr[8] = {12, 6, 4, 10, 45, 8, 20, 1};
    display(arr, 8);
    bubbleSort(arr, 8);
    display(arr, 8);
}