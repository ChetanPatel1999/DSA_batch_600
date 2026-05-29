#include <stdio.h>

int reverse(int num, int rev)
{
    if (num == 0)
        return rev;
    return reverse(num / 10, rev * 10 + num % 10);
}
void main()
{
    printf("reverse= %d", reverse(456, 0));
}