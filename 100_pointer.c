// when we inacrease pointer value by 1 so pointer value increase
//  by 4 if pointer type is integer.
#include <stdio.h>
void main()
{
    int a = 12;
    int *ptr = &a;

    printf("a = %d\n", a);
    printf("&a = %d\n", &a);     // 5667620
    printf("ptr = %d\n", ptr);   // 5667620
    printf("*ptr = %d\n", *ptr); // 12

    ptr++;

    printf("&a = %d\n", &a);   // 5667620
    printf("ptr = %d\n", ptr); // 5667624
}