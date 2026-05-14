// Write a program to count how many elements in an array are prime and how many are not prime.
#include <stdio.h>
void main()
{
    int arr[] = {12, 7, 34, 43, 9, 23}, i;
    int n = sizeof(arr) / sizeof(int);

    printf("array element are : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    int num;
    int j, c, pc = 0, npc = 0;
    // 12, 7, 34, 78, 9, 23
    for (i = 0; i < n; i++) // 2
    {
        num = arr[i]; // 34
        c = 0;
        for (j = 1; j <= num; j++)
        {
            if (num % j == 0)
            {
                c++;
            }
        }
        if (c == 2)
        {
            pc++;
        }
        else
        {
            npc++;
        }
    }

    printf("\ntotal prime = %d", pc);
    printf("\ntotal not prime = %d", npc);
}