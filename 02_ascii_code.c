#include <stdio.h>
void main()
{
    // char ch='1';
    // printf("%d",ch);
    char ch[5];
    printf("enter string : ");
    fgets(ch, 5, stdin); 
    printf("string = %s", ch);
}