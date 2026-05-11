// how find array length
#include <stdio.h>
void main()
{
    int arr[] = {12, 34, 56, 78, 90, 77, 99};
    int l = sizeof(arr) / sizeof(int);
    printf("array length : %d ", l);
}