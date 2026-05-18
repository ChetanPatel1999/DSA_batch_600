#include <stdio.h>
void addition() // function defination
{
    int a, b, c;
    printf("enter a : ");
    scanf("%d", &a);
    printf("enter b : ");
    scanf("%d", &b);
    c = a + b;
    printf("addition = %d\n", c);
}
void main()
{
    printf("main fun is start ...\n");
    addition(); // function calling
    printf("again main function stmnt is run ...\n");
    addition();
    printf("main  function is end...");
}