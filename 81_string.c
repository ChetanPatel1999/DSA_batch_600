//  Write a program to find the length of a string without using built-in functions.
#include <stdio.h>
void main()
{
    char str[50];
    printf("enter a string : ");
    gets(str); // indore
    printf("string : %s\n", str);

    int i, c = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        c++;
    }

    printf("string length : %d", c);
}