// string built in fuctioncl
#include <stdio.h>
#include <string.h>
void main()
{
    char name[50] = "ram";
    printf("string : %s\n", name);
    printf("length of string = %d\n", strlen(name));

    strupr(name);

    printf("string upercase = %s\n", name);

    strlwr(name);

    printf("string lowercase = %s\n", name);

    strrev(name);

    printf("reverse string = %s\n", name);
}