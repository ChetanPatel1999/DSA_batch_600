// with return type  but no parameter
#include <stdio.h>
int add()
{
    int c, a = 12, b = 6;
    c = a + b;
    return c;
}

int cube()
{
    int num = 4;
    return num * num * num;
}

void main()
{
    int res = add();
    printf("sum = %d\n", res);

    printf("cube = %d", cube());
}