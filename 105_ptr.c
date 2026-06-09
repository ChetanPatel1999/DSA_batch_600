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

    int sum = 0;
    ptr = arr;
    // 1 2 3 4 5
    for (i = 0; i < 5; i++) // 1
    {
        sum = sum + *ptr;
        ptr++; // 420
    }

    printf("\nsum of all array element : %d\n", sum);

    // 5 4 7 3 8

    ptr = arr;
    printf("display even array element are : \n");
    for (i = 0; i < 5; i++) // 1
    {
        if (*ptr % 2 == 0)
        {
            printf("%d ", *ptr);
        }
        ptr++;
    }
}