#include <stdio.h>
void main()
{
    int arr[] = {12000, 666, 34, 78, 9, 823, 55, 758, 190}, i;
    int n = sizeof(arr) / sizeof(int);
    printf("array element are : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    int max = arr[0];
    int pos = 0;
    for (i = 1; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            pos = i; // 5
        }
    }
    printf("\nmax element : %d\n", max);
    printf("max element pos : %d", pos + 1);
}