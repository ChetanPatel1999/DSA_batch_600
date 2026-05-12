#include <stdio.h>
void main()
{
    int marks[] = {50, 70, 40, 20, 63};
    int len = sizeof(marks) / sizeof(int);
    int i;
    printf("students marks list : \n");
    for (i = 0; i < len; i++) // 1
    {
        printf("%d ", marks[i]);
    }

    int sum = 0;
    // 50, 70, 40, 20, 60
    for (i = 0; i < len; i++) // 2
    {
        sum = sum + marks[i]; // 120
    }

    printf("\nall students marks total = %d", sum);
    printf("\naverage of marks : %.2f", sum / (float)len);
}