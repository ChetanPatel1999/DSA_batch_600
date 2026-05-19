// no return type no parameter
#include <stdio.h>
void addition()
{
    int a = 12, b = 5, c;
    c = a + b;
    printf("addition = %d\n", c);
}
void cube()
{
    int num = 4;
    int res;
    res = num * num * num;
    printf("cube of %d = %d\n", num, res);
}

void main()
{
    cube();
    cube();
    cube();
    addition();
    addition();
    addition();
}