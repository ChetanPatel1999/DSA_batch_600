#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int top;
    int size;
    int *arr;
};

int isEmpty(struct stack *s1)
{
    if (s1->top == -1)
    {
        return 1;
    }
    return 0;
}

int isFull(struct stack *s1)
{
    if (s1->top == s1->size - 1)
    {
        return 1;
    }
    return 0;
}

void push(struct stack *s1, int num) // 28
{
    if (isFull(s1))
    {
        printf("\nstack is overfloew, we cant push element\n");
    }
    else
    {
        s1->top++;
        s1->arr[s1->top] = num;
    }
}
void display(struct stack *s1)
{
    if (isEmpty(s1))
    {
        printf("\nstack is underflow , we can display\n");
    }
    else
    {
        int i;
        printf("stack element are : ");
        for (i = 0; i <= s1->top; i++)
        {
            printf("%d ", s1->arr[i]);
        }
        printf("\n");
    }
}

int pop(struct stack *s1)
{
    if (isEmpty(s1))
    {
        printf("stack is under flow , we can't pop");
        return -1;
    }
    else
    {
        int num = s1->arr[s1->top];
        s1->arr[s1->top] = 0;
        s1->top--;
        return num;
    }
}
int count(struct stack *s1)
{
    if (isEmpty(s1))
    {
        return 0;
    }
    else
    {
        return s1->top + 1;
    }
}
int peek(struct stack *s1)
{
    if (isEmpty(s1))
    {
        printf("stack is under flow , we can't peek");
        return -1;
    }
    else
    {
        return s1->arr[s1->top];
    }
}
void main()
{
    struct stack *s1 = (struct stack *)malloc(sizeof(struct stack));
    s1->top = -1;
    s1->size = 5;
    s1->arr = (int *)malloc(s1->size * sizeof(int));

    printf("total element count = %d\n", count(s1));
    push(s1, 89);
    push(s1, 56);
    push(s1, 22);
    printf("total element count = %d\n", count(s1));
    display(s1);
    push(s1, 33);
    display(s1);
    printf("%d elememt is pop \n", pop(s1));
    display(s1);
    printf("%d elememt is pop \n", pop(s1));
    display(s1);
    printf("total element count = %d\n", count(s1));
    printf("peek element is = %d\n", peek(s1));
}