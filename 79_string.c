// fgets() :-  its used to take data from user.
// f puts () :- its display data on output screen
#include <stdio.h>
void main()
{
    char name[20];
    printf("enter a string : ");
    fgets(name, 20, stdin);

    printf("name = ");
    fputs(name, stdout);
}