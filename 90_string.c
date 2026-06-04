// strcpy() :- its copy one string into another string variable
#include <stdio.h>
#include <string.h>
void main()
{
    char st1[50] = "ram";
    char st2[50];
    char st3[50];

    strcpy(st2, st1);

    strcpy(st3, "ravi"); //

    printf("st1 = %s\n", st1);
    printf("st2 = %s\n", st2);
    printf("st3 = %s\n", st3);
}