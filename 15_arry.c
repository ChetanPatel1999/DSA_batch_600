//display array address 
#include <stdio.h>
void main()
{
    int arr[] = {12, 34, 56, 78, 90}, i;
    printf("%d   \n", arr);
    printf("array element address are : \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d   ", &arr[i]);
    }

    char arr1[] = {12, 34, 56, 78, 90};
    printf("\narray element address are : \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d   ", &arr1[i]);
    }

    double arr2[] = {12, 34, 56, 78, 90};
    printf("\narray element address are : \n");
    for (i = 0; i < 5; i++)
    {
        printf("%d   ", &arr2[i]);
    }
}