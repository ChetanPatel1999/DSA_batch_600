// Write a program  to separate individual characters from a string (like:- h e l l o  w o r l d  i n s t i t u t e).
//  indore
//  i+n+d+o+r+e
#include <stdio.h>
void main()
{
    char str[50];
    printf("enter a string : ");
    gets(str); // indore
    int i;
    for (i = 0; str[i] != '\0'; i++) // 6
    {
        if (str[i + 1] == '\0')
        {
            printf("%c", str[i]);
        }
        else
        {
            printf("%c+", str[i]);
        }
    }
}