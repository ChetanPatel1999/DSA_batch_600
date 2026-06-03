//  Write a program to convert a string to uppercase.
#include <stdio.h>
void upper(char name[])
{
    int i;
    for (i = 0; name[i] != '\0'; i++) // 1
    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            name[i] = name[i] - 32;
        }
    }
}
int length(char arr[])
{
    int i, c = 0;
    for (i = 0; arr[i] != '\0'; i++)
    {
        c++;
    }
    return c;
}
void reverse(char name[])
{
    int i;
    int l = length(name);
    char temp;
    for (i = 0; i < (l / 2); i++) // 1
    {
        temp = name[i];
        name[i] = name[l - 1 - i];
        name[l - 1 - i] = temp;
    }
}

void main()
{
    char name[] = "ram patel";
    char city[] = "indore";
    char color[] = "red";

    printf("string1= %s \n", name);
    printf("string2 = %s \n", city);
    printf("string3 = %s \n", color);

    upper(name);
    upper(city);
    upper(color);

    printf("string1 = %s \n", name);
    printf("string2 = %s \n", city);
    printf("string3 = %s \n", color);

    reverse(name);
    reverse(city);
    reverse(color);

    printf("string1 = %s \n", name);
    printf("string2 = %s \n", city);
    printf("string3 = %s \n", color);
}