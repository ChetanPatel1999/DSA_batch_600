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
int match(char a, char b)
{
    if (a == ')' && b == '(')
    {
        return 1;
    }
    if (a == ']' && b == '[')
    {
        return 1;
    }
    if (a == '}' && b == '{')
    {
        return 1;
    }
    return 0;
}

int perenthesisMatch(char exp[]) //"[{(46+6)}]";
{
    int i;
    for (i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{')
        {
            push(exp[i]);
        }
        if (exp[i] == ')' || exp[i] == ']' || exp[i] == '}')
        {
            if (isEmpty())
            {
                return 0;
            }
            char item = pop();        //
            if (!match(exp[i], item)) //
            {
                return 0;
            }
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
    char exp[] = "[{(4+6)]}";
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