// wap to mearge two sorted array in accesnding order.
#include <stdio.h>
void main()
{
    int arr1[4] = {8, 12, 25, 31};
    int arr2[4] = {17, 32, 40, 42};
    int newarr[8];
    int i = 0, j = 0, n = 0;

    while (i < 4 && j < 4)
    {
        if (arr1[i] < arr2[j])
        {
            newarr[n] = arr1[i];
            n++; // 5
            i++; // 4
        }
        else
        {
            newarr[n] = arr2[j];
            n++; // 3
            j++; // 1
        }
    }

    while (i < 4)
    {
        newarr[n] = arr1[i];
        i++;
        n++;
    }
    while (j < 4)
    {
        newarr[n] = arr2[j];
        j++;
        n++;
    }
    printf("array element are : \n");
    for (i = 0; i < 8; i++)
    {
        printf("%d ", newarr[i]);
    }
}