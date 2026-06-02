// gets() :-  its used to take string from user
// puts() :-  its display data on output screen

// gets function is deprecated
// puts also deprecated
#include <stdio.h>
void main()
{
    char name[100];
    printf("enter a string : ");
    gets(name);
    // printf("name = %s", name);
    printf("name = ");
    puts(name);
}