// wap to print string charcter in revrse order.
#include <stdio.h>
void main()
{
    char name[50];
    printf("enter a string : ");
    gets(name); // hello
    printf("string = %s \n", name);

    int i, l = 0;
    for (i = 0; name[i] != '\0'; i++)
    {
        l++;
    }

    printf("reverse string is : ");
    for (i = l - 1; i >= 0; i--)
    {
        printf("%c", name[i]);
    }

    printf("\nstring = %s \n", name);
}