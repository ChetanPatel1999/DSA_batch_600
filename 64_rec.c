// wap to function which retirn 1 to given number sum.
#include <stdio.h>
// int numSum(int num)
// {
//     int sum = 0, i;
//     for (i = 1; i <= num; i++)
//     {
//         sum = sum + i;
//     }
//     return sum;
// }

// int numSum(int num)
// {
//     static int sum = 0, i = 1;
//     sum = sum + i; // 15
//     i++;           // 6
//     if (i <= num)
//     {
//         numSum(num);
//     }
//     return sum;
// }

int numSum(int num)
{
    if (num == 0)
    {
        return 0;
    }
    return num + numSum(num - 1);
}

void main()
{
    printf("sum = %d\n", numSum(5));
    printf("sum = %d\n", numSum(10));
}