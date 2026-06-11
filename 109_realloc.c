#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n1, n2, i;
    printf("enter dynamic array length : ");
    scanf("%d", &n1); // 5
    int *ptr = (int *)malloc(n1 * sizeof(int));
    int *temp = ptr;
    printf("dynamic array addresses are : \n");
    for (i = 0; i < n1; i++)
    {
        printf("%d ", ptr);
        ptr++;
    }

    printf("\nenter increseing array length : ");
    scanf("%d", &n2); // 3
    ptr = temp;
    int *ptr1 = (int *)realloc(ptr, (n1 + n2) * sizeof(int));
    temp = ptr1;
    printf("new dynamic array addresses are : \n");
    for (i = 0; i < (n1 + n2); i++)
    {
        printf("%d ", ptr1);
        ptr1++;
    }

    ptr1 = temp;
    free(ptr1);
}