#include <stdio.h>
void fun(int *a)
{
    printf("a = %d\n", *a); // 12
    *a = 78;
    printf("a = %d\n", *a); // 78
}
void main()
{
    int a = 12;
    printf("a = %d\n", a); // 12
    fun(&a);               // call by referene/address
    printf("a = %d\n", a); // 78
}