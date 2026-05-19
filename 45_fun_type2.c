// no return type but with parameter
#include <stdio.h>
void addition(int a, int b)
{
    int c;
    c = a + b;
    printf("addition = %d\n", c);
}

void cube(int num)
{
    int res;
    res = num * num * num;
    printf("cube of %d = %d\n", num, res);
}

void main()
{

    cube(5);
    cube(3);
    cube(2);
    cube(4);
    addition(12, 9);
    addition(10, 5);
    addition(4, 9);
}