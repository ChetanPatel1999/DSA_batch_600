// wap to print 1 to 10 even numbers.
#include <stdio.h>
void fun(int num)
{
    if (num > 1)
    {
        fun(num - 1);
    }
    if (num % 2 == 0)
    {
        printf("%d ", num);
    }
}
void main()
{
    fun(10);
}