#include <stdio.h>
void main()
{
    int arr[5]; // array declaration
    int i;

    arr[0] = 12;
    arr[1] = 40;
    arr[2] = 56;
    arr[3] = 89;
    arr[4] = 22;

    printf("array element are : \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}