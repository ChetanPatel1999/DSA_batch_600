// wap to print string charcter in revrse order.
#include <stdio.h>
void main()
{
    char name[50], str[] = "daksh";
    printf("enter a string : ");
    gets(name); // hello
    printf("string = %s \n", name);

    int i, l = 0;
    for (i = 0; name[i] != '\0'; i++)
    {
        l++;
    }
    // l= 5
    char temp;
    // hello
    for (i = 0; i < (l / 2); i++) // 1
    {
        temp = name[i];
        name[i] = name[l - 1 - i];
        name[l - 1 - i] = temp;
    }

    printf("string = %s \n", name);
    printf("string2 = %s \n", str);
}