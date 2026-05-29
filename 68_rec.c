// wap to print sum of only even number
#include <stdio.h>
int numSum(int num)
{
    if (num == 0)
        return 0;
    if (num % 2 == 0)
        return num + numSum(num - 1);
    return numSum(num - 1);
}
void main()
{
    printf("sum = %d", numSum(10));
}