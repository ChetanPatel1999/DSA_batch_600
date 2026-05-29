// wap to make a function which take a number and return some of
// individual digit.
#include <stdio.h>
// int digitSum(int num) // 456
// {
//     int sum = 0, rem;
//     while (num != 0)
//     {
//         rem = num % 10;  // 3
//         sum = sum + rem; // 6
//         num = num / 10;  // 0
//     }
//     return sum;
// }

int digitSum(int num) // 56
{
    if (num == 0)
        return 0;
    return num % 10 + digitSum(num / 10);
}
void main()
{
    printf("sum of digit = %d", digitSum(56));
}