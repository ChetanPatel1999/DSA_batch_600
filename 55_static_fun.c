#include <stdio.h>
void fun()
{
    static int a = 1; // its run only once time in program
    printf("a = %d\n", a);
    a++; // 4
}
void main()
{
    fun();
    fun();
    fun();
}