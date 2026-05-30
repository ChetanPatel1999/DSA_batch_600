//how to visit string each character using loops and null character 
#include <stdio.h>
void main()
{
    char data[20] = "indore city";
    int i;
    for (i = 0; data[i] != '\0'; i++) // 6
    {
        printf("%c ", data[i]);
    }
}