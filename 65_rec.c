#include <stdio.h>
int factorial(int num)
{
    if (num == 0)
    {
        return 1;
    }
    return num * factorial(num - 1);
}
void main()
{
    printf("factorial = %d", factorial(5));
}