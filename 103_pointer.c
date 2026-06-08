#include <stdio.h>
void main()
{
    int arr[5] = {12, 34, 56, 78, 90};
    int *ptr;
    ptr = arr; // &arr[0]
    int i;
    printf("array elements are : \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", *ptr);
        ptr++; // 420
    }

    int sum = 0;
    ptr = arr; // 400
    for (i = 0; i < 5; i++)
    {
        sum = sum + *ptr;
        ptr++;
    }

    printf("\nsum of all array elements : %d", sum);
}