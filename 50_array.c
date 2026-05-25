#include <stdio.h>
void display(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++) // 1
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void insert(int arr[], int n)
{
    int pos;
    printf("enter position : ");
    scanf("%d", &pos); //
    if (pos < 0 || pos >= n)
    {
        printf("invalid position\n");
        return;
    }

    int value;
    printf("enter value : ");
    scanf("%d", &value);
    int i;
    // pos=2
    // value= 400        2
    for (i = n - 1; i > pos; i--) // i=2
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
}
void main()
{
    int arr[5] = {12, 34, 56, 78, 60};
    printf("arr element : \n");
    display(arr, 5);
    insert(arr, 5);
    printf("\narr element : \n");
    display(arr, 5);
}