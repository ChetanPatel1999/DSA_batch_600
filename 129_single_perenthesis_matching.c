#include <stdio.h>
#include <stdlib.h>
struct node
{
    char data;
    struct node *next;
};
struct node *top = NULL;

int isEmpty()
{
    if (top == NULL)
    {
        return 1;
    }
    return 0;
}
void push(char num)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->data = num;
    new->next = NULL;

    if (top == NULL)
    {
        top = new;
    }
    else
    {
        new->next = top;
        top = new;
    }
}
char pop()
{
    if (isEmpty())
    {
        return -1;
    }
    else
    {
        struct node *temp = top;
        char num = temp->data;
        top = top->next;
        free(temp);
        return num;
    }
}
int perenthesisMatch(char exp[])
{
    int i;
    for (i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
        {
            push(exp[i]);
        }
        if (exp[i] == ')')
        {
            if (isEmpty())
            {
                return 0;
            }
            pop();
        }
    }

    if (isEmpty())
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void main()
{
    char exp[] = "((12+5)+(4*6)";
    printf("expression : %s\n", exp);
    if (perenthesisMatch(exp))
    {
        printf("perenthesis-matched");
    }
    else
    {
        printf("perenthesis-not matched");
    }
}