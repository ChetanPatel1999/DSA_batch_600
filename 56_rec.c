// wap to print 1 to 10 number using recursion .
#include <stdio.h>
void fun()
{
    static int i = 1;
    printf("%d\n", i);
    i++;
    if (i <= 10)
    {
        fun();
    }
}
void main()
{
    fun();
}