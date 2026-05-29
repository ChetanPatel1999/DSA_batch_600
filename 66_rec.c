// wap to make functio which take two parameter (number , power) and return result.
#include <stdio.h>
// int power(int num, int p)
// {
//     int res = 1, i;
//     for (i = 1; i <= p; i++)
//         res = res * num; // 125
//     return res;
// }

int power(int num, int p)
{
    if (p == 0)
        return 1;
    return num * power(num, p - 1);
}
void main()
{
    printf("power ans = %d\n", power(5, 3));
}