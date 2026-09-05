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
void count_sort(int arr[], int n)
{
    int i;
    int max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    int countArr[max + 1];
    for (i = 0; i < max + 1; i++)
    {
        countArr[i] = 0;
    }

    //  2, 9, 7, 4, 1, 8, 4, 4
    for (i = 0; i < n; i++) // 6
    {
        countArr[arr[i]] = countArr[arr[i]] + 1;
    }

    int j = 0;
    // arr --> 1 2 4 4 4 7 8 9
    for (i = 0; i < max + 1; i++) // 10
    {
        while (countArr[i] > 0)
        {
            arr[j] = i;
            countArr[i] = countArr[i] - 1;
            j++; // 8
        }
    }
}
void main()
{
    int arr[8] = {2, 9, 2, 7, 1, 8, 4, 4};
    display(arr, 8);
    count_sort(arr, 8);
    display(arr, 8);
}