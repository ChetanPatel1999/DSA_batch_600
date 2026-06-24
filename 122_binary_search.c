#include <stdio.h>
void main()
{
    //   0   1    2   3    4    5    6    7   8    9
    int arr[10] = {34, 50, 80, 100, 125, 200, 500, 589, 600, 635};
    int num = 34;
    int start = 0, end = 9, mid, f = 0;
    while (start <= end) // 0 0
    {
        mid = (start + end) / 2; // 0
        if (arr[mid] == num)
        {
            f = 1;
            break;
        }
        if (num < arr[mid])
        {
            end = mid - 1; //-1
        }
        if (num > arr[mid])
        {
            start = mid + 1;
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