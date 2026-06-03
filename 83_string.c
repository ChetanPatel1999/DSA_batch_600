//  Write a program to convert a string to uppercase.
#include <stdio.h>
void main()
{
    char name[50];
    printf("enter a string : ");
    gets(name); // abc123

    printf("string = %s \n", name);
    int i;
    for (i = 0; name[i] != '\0'; i++) // 1
    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            name[i] = name[i] - 32;
        }
    }
    printf("uper string = %s \n", name);
}