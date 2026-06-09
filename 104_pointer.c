#include <stdio.h>
void main()
{
    int arr[5];
    int *ptr = arr;
    int i;
    printf("enter array element : \n");
    for (i = 0; i < 5; i++) // 5
    {
        scanf("%d", ptr);
        ptr++; // 420
    }

    ptr = &arr[0]; // arr

    printf("display array element : \n");
    for (i = 0; i < 5; i++) // 1
    {
        printf("%d ", *ptr); //
        ptr++;
    }
}