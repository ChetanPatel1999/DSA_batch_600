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
int partician(int arr[], int low, int high)
{ //           ipj
    // 19, 9, 14, 24, 29, 27
    int pivot = arr[low], i, j, temp;
    i = low;  // 0
    j = high; // 5
    do
    {
        while (arr[j] > pivot)
        {
            j--;
        }
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        pivot = arr[j]; // 24
        while (arr[i] < pivot)
        {
            i++; //
        }
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        pivot = arr[i];
    } while (i != j);
    return i; // j
}
void quick_sort(int arr[], int low, int high)
{
    int particianIndex;
    if (low < high) // 0 < 1
    {
        particianIndex = partician(arr, low, high); // 3
        quick_sort(arr, low, particianIndex - 1);
        quick_sort(arr, particianIndex + 1, high);
    }
}
void main()
{
    int arr[6] = {24, 9, 29, 14, 19, 27};
    display(arr, 6);
    quick_sort(arr, 0, 5);
    display(arr, 6);
}