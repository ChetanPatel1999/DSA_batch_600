// here we make resizable array using realloc() function.
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *ptr = (int *)malloc(sizeof(int));
    int *temp = ptr;
    int n = 0, i, p;
    while (1)
    {
        printf("\nenter marks of student : ");
        scanf("%d", (ptr + n)); // 50
        n++;                    // 3
        printf("more student available press 1 : ");
        scanf("%d", &p); // 1
        if (p != 1)
        {
            break;
        }
        ptr = (int *)realloc(ptr, (n + 1) * sizeof(int));
        temp = ptr;
        for (i = 0; i <= n; i++)
        {
            printf("%d ", ptr);
            ptr++;
        }
        ptr = temp;
    }

    printf("all array element are : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *ptr);
        ptr++;
    }

    ptr = temp;
    int sum = 0;
    for (i = 0; i < n; i++)
    {
        sum = sum + *ptr;
        ptr++;
    }
    printf("\ntotal marks of class = %d\n", sum);
}