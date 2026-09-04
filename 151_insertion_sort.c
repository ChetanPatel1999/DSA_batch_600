#include <stdio.h>
void display(int arr[], int n)
{
    printf("array element are : ");
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void insertion_sort(int arr[], int n)
{
    // 0   1    2  3   4   5  6       7
    // 1, 8,  12, 17, 25,29,32,     40
    int i, j, key;
    for (i = 1; i < n; i++) // 7
    {
        key = arr[i];                  // 1
        j = i - 1;                     // 6
        while (j >= 0 && key < arr[j]) //
        {
            arr[j + 1] = arr[j];
            j--; //-1
        }
        arr[j + 1] = key;
    }
}
void main()
{
    int arr[8] = {12, 29, 25, 8, 32, 17, 40, 1};
    display(arr, 8);
    insertion_sort(arr, 8);
    display(arr, 8);
}