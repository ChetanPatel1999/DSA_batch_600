// all types pointer have same byte of memory to store
// address of another variable
#include <stdio.h>
void main()
{
    int *ptr1;
    float *ptr2;
    short int *ptr3;
    double *ptr4;
    char *ptr5;

    printf("szie of ptr1 = %d\n", sizeof(ptr1));
    printf("szie of ptr2 = %d\n", sizeof(ptr2));
    printf("szie of ptr3 = %d\n", sizeof(ptr3));
    printf("szie of ptr4 = %d\n", sizeof(ptr4));
    printf("szie of ptr5 = %d\n", sizeof(ptr5));
}