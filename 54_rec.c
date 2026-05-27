// wap to print a msg 5 times using recursion .
#include <stdio.h>
void fun()
{
    static int i = 1;
    printf("hello world institute\n"); // 2
    i++;
    if (i <= 5)
    {
        fun();
    }
}
void main()
{
    fun();
}