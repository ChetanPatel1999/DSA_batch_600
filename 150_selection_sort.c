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
void selection_sort(int arr[], int n)
{
    // 0   1   2    3    4     5    6
    // 8, 12, 17,  25,  29, || 32, 40
    int i, j;
    for (i = 0; i < n - 1; i++) // 6
    {
        int min = arr[i];           // 32
        int index = i;              // 5
        for (j = i + 1; j < n; j++) // 7
        {
            if (arr[j] < min)
            {
                min = arr[j]; // 29
                index = j;    // 5
            }
        }
        int temp = arr[i]; // 32
        arr[i] = arr[index];
        arr[index] = temp;
    }
}
void main()
{
    int arr[8] = {12, 29, 25, 8, 32, 17, 40, 1};
    display(arr, 8);
    selection_sort(arr, 8);
    display(arr, 8);
}