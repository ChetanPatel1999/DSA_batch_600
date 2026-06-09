#include <stdio.h>
void main()
{
    int arr[5] = {12, 34, 56, 78, 90};
    int *ptr;
    ptr = arr; // &arr[0]

    printf("%d ", *ptr); // 12
    ptr++;
    printf("%d ", *ptr); // 34
    ptr++;
    printf("%d ", *ptr);
    ptr++;
    printf("%d ", *ptr);
    ptr++;
    printf("%d ", *ptr);
    ptr++;
}