//reverse number
#include <stdio.h>
void main()
{
    int num = 345, res = 0, rem;
    while (num != 0)
    {
        rem = num % 10; // 3
        res = res * 10 + rem;
        num = num / 10; // 0
    }
    printf("%d ", res); //
}