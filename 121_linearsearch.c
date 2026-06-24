#include <stdio.h>
void main()
{
    int arr[10] = {3, 5, 78, 56, 23, 89, 22, 45, 77, 33};

    int num = 35;
    int i, f = 0;
    for (i = 0; i < 10; i++) // 1
    {
        if (num == arr[i])
        {
            f = 1;
            break;
        }
    }
    if (f == 1)
    {
        printf("element is found");
    }
    else
    {
        printf("element is not found");
    }
}