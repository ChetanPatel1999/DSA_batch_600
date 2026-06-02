// how to take multiple word form user
#include <stdio.h>
void main()
{
    char name[100];
    printf("enter a string : ");
    scanf("%[^\n]s", name);

    printf("name = %s", name);
}