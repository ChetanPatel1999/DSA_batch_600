#include <stdio.h>
int g = 1000;
void fun1()
{
    int a = 12; // local variable
    printf("a = %d\n", a);
    printf("g = %d\n", g);
    g++;
}
void fun2()
{
    int b = 600;
    printf("b = %d\n", b);
    printf("g = %d\n", g);
}
void main()
{
    int c = 300; // local variable

    fun1();
    fun2();
    printf("c = %d\n", c);
    printf("g = %d\n", g);
}