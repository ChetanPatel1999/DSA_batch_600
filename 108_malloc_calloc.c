#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr1 = malloc(20);
    int *ptr2 = calloc(5, 4);
    int i;
    printf("malloc array element : \n");
    for (i = 0; i < 5; i++) // 5
    {
        printf("%d ", *ptr1);
        ptr1++;
    }
    printf("\ncalloc array element : \n");
    for (i = 0; i < 5; i++) // 5
    {
        printf("%d ", *ptr2);
        ptr2++;
    }
}