#include <stdio.h>
#include <string.h>
void main()
{
    char str[50] = "naman";
    int i, j, f = 1;
    i = 0;
    j = strlen(str) - 1;

    while (i < j) // 1<3
    {
        if (str[i] != str[j])
        {
            f = 0;
            break;
        }
        i++; // 2
        j--; // 2
    }
    if (f == 1)
    {
        printf("string is plindrome");
    }
    else
    {
        printf("string is not plindrom");
    }
}