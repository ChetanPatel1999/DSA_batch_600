#include <stdio.h>
void fun2();
void fun2();
void fun1()
{
    fun2();
    printf("hello i am fun 1\n");
}
void fun2()
{
    printf("hello i am fun 2\n");
}
void fun3()
{
    fun1();
    printf("hello i am fun 3\n");
    fun1();
}
void main()
{
    printf("main fun is start...\n");
    fun3();
    printf("main fun is end..");
}