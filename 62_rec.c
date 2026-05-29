// wap to print 1 to 10 number using recursion.
#include <stdio.h>
void fun(int num)
{
    if (num > 1)
    {
        fun(num - 1);
    }
    printf("%d\n", num*num);
}
void main()
{
    fun(10);
}