#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int top;
    int size;
    int *arr;
};

void main()
{
    struct stack *s1 = (struct stack *)malloc(sizeof(struct stack));
    s1->top = -1;
    s1->size = 5;
    s1->arr = (int *)malloc(s1->size * sizeof(int));
}