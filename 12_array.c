// different array size  example
#include <stdio.h>
void main()
{
    char marks1[] = {12, 34, 56, 78, 90};
    printf("array size = %d\n", sizeof(marks1));

    short int marks2[] = {12, 34, 56, 78, 90};
    printf("array size = %d\n", sizeof(marks2));

    int marks3[] = {12, 34, 56, 78, 90};
    printf("array size = %d\n", sizeof(marks3));

    double marks4[] = {12, 34, 56, 78, 90};
    printf("array size = %d\n", sizeof(marks4));
}