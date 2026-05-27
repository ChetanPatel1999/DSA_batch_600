#include <stdio.h>
int i = 1; // globle variable
void fun()
{
    printf("hello world institute\n"); // 4
    i++;                               // 5
    if (i <= 5)
    {
        fun();
    }
}
void main()
{
    fun();
}