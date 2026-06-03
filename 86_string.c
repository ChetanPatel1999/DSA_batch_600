//  Write a program to find the length of a string without using built-in functions.
#include <stdio.h>
int length(char arr[])
{
    int i, c = 0;
    for (i = 0; arr[i] != '\0'; i++)
    {
        c++;
    }
    return c;
}
void main()
{
    char name[] = "ram patel";
    char city[] = "indore";
    char color[] = "red";

    printf("name length : %d\n", length(name));
    printf("city length : %d\n", length(city));
    printf("color length : %d\n", length(color));
    printf("gmail length : %d\n", length("abc123@gmail.com"));
}