// strcat() :-  its used to combine two string.
#include <stdio.h>
#include <string.h>
void main()
{
    char st1[50] = "ram";
    char st2[50] = "patel";
    char st3[50] = "weds";
    printf("st1 = %s\n", st1);
    printf("st2 = %s\n", st2);

    strcat(st1, " ");
    strcat(st1, st2);
    strcat(st1, " ");
    strcat(st1, st3);

    printf("full string : %s", st1);
}