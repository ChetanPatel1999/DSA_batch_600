// wap to count vovles in given string.
#include <stdio.h>
void main()
{
    char data[100] = "indore city is a clean city";
    int i, c = 0;
    printf("data = %s\n", data);
    for (i = 0; data[i] != '\0'; i++) //
    {
        if (data[i] == 'a' || data[i] == 'e' || data[i] == 'i' || data[i] == 'o' || data[i] == 'u')
        {
            c++;
        }
    }
    printf("total vovel count in string : %d", c);
}