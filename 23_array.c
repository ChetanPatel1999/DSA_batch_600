#include <stdio.h>
void main()
{
    int n;
    printf("enter array length : ");
    scanf("%d", &n); // 10
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

    int ec = 0, oc = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            ec++;
        }
        else
        {
            oc++;
        }
    }
    printf("\ntotal even element in array : %d", ec);
    printf("\ntotal odd element in array : %d", oc);
}