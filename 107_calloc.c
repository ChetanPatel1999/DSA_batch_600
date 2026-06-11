#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n;
    printf("enter array size : ");
    scanf("%d", &n); // 5
    int *ptr = (int *)calloc(n, sizeof(int));
    int *temp = ptr;
    int i;
    if (ptr == NULL)
    {
        printf("memory is not allocate");
    }
    else
    {
        printf("enter array element : \n");
        for (i = 0; i < n; i++) // 5
        {
            scanf("%d", ptr);
            ptr++; // 408
        }

        ptr = temp;
        printf("display array element : \n");
        for (i = 0; i < n; i++) // 1
        {
            printf("%d ", *ptr); //
            ptr++;
        }

        int sum = 0;
        ptr = temp;
        // 1 2 3 4 5
        for (i = 0; i < n; i++) // 1
        {
            sum = sum + *ptr;
            ptr++; // 420
        }

        printf("\nsum of all array element : %d\n", sum);

        // 5 4 7 3 8

        ptr = temp;
        printf("display even array element are : \n");
        for (i = 0; i < n; i++) // 1
        {
            if (*ptr % 2 == 0)
            {
                printf("%d ", *ptr);
            }
            ptr++;
        }

        ptr = temp;
        free(ptr);
    }
}