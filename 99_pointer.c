// we can change value of any varible using pointer.
// if that variable address store in pointer.
#include <stdio.h>
void main()
{
    int a = 12;
    int *ptr;
    ptr = &a;

    printf("a =  %d\n", a);

    *ptr = 90;

    printf("a =  %d\n", a);
}