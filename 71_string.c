#include <stdio.h>
void main()
{
    // char name[5] = "ravi";
    char name[5] = {'r', 'a', 'v', 'i', '\0'};
    printf("name = %s\n", name);
    printf("%c\n", name[0]);
    printf("%c\n", name[1]);
    printf("%c\n", name[2]);
    printf("%c\n", name[3]);
}