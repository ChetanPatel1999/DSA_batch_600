// strcmp() :=  its compare two string
#include <stdio.h>
#include <string.h>
void main()
{
    char a[20] = "ram";
    char b[20] = "ravi";
    if (strcmp(a, b) == 0)
    {
        printf("string are same");
    }
    else
    {
        printf("string are different");
    }
}