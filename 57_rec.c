// wap to print 1 to 20 even numbers using recursion .
#include <stdio.h>
void fun()
{
    static int i = 1;
    if (i % 2 == 0)
    {
        printf("%d\n", i);
    }
    i++; // 4
    if (i <= 20)
    {
        fun();
    }
}
void main()
{
    fun();
}