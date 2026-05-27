#include <stdio.h>
void fun(int num)
{
    printf("%d ", num);
    if (num > 0)
    {
        fun(num - 1);
    }
}
void main()
{
    fun(10);
}