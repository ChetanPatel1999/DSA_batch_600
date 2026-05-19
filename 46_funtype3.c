// with return type ,with parameter
#include <stdio.h>
int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

int cube(int num)
{
    return num * num * num;
}

void main()
{
    int ans = cube(5);
    printf("cube = %d ", ans);

    // int res = add(12, 5);

    // printf("sum = %d\n", res);

    // printf("sum = %d\n", add(5, 6));
    // printf("sum = %d\n", add(15, 16));
}