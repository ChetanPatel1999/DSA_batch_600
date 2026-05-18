#include <stdio.h>
void addition()
{
    int a, b, c;
    printf("enter a : ");
    scanf("%d", &a);
    printf("enter b : ");
    scanf("%d", &b);
    c = a + b;
    printf("addition = %d\n", c);
}
void main()
{
    int i;
    for (i = 1; i <= 5; i++) // 2
    {
        addition();
    }
}