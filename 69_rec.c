#include <stdio.h>

int digitCount(int num) 
{
    if (num == 0)
        return 0;
    return 1 + digitCount(num / 10);
}
void main()
{
    printf("sum of digit = %d", digitCount(563));
}