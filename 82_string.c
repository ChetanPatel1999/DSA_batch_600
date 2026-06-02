// Write a program to count the number of words in a string.
#include <stdio.h>
void main()
{
    char str[50];
    printf("enter a string : ");
    gets(str); // indore city
    printf("string : %s\n", str);
    int i, c = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            c++;
        }
    }
    printf("total word = %d", c + 1);
}
