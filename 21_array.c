// how to take array element from user
#include <stdio.h>
void main()
{
    int n;
    printf("enter array length : ");
    scanf("%d", &n); //10
    int arr[n];
    int i;
    printf("enter array element : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("array element are : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}