// wap to check string is plindrom or note.
#include <stdio.h>
#include <string.h>
void main()
{
    char str[50];
    printf("enter string : ");
    gets(str);
    printf("string : %s\n", str);
    char temp[20];
    strcpy(temp, str);

    strrev(str);

    if (strcmp(temp, str) == 0)
    {
        printf("string is plindrom");
    }
    else
    {
        printf("string are not plindrom");
    }
}