#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

char stackTop()
{
    return top->data;
}

int operator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^')
    {
        return 1;
    }
    return 0;
}

int precedence(char ch)
{
    if (ch == '^')
    {
        return 4;
    }
    if (ch == '*' || ch == '/')
    {
        return 3;
    }
    if (ch == '+' || ch == '-')
    {
        return 2;
    }
    return 0;
}
char *infix_to_postfix(char exp[]) //"a+b*c + d *e"
{
    char *postfix = (char *)malloc(strlen(exp) * sizeof(char));
    int i = 0, j = 0;
    while (exp[i] != '\0')
    {
        if (!operator(exp[i]))
        {
            postfix[j] = exp[i];
            j++;
            i++;
        }
        else
        {
            if (isEmpty())
            {
                push(exp[i]);
                i++;
            }
            else
            {
                if (precedence(exp[i]) >= precedence(stackTop()))
                {
                    push(exp[i]);
                    i++;
                }
                else
                {
                    postfix[j] = pop();
                    j++;
                }
            }
        }
    }

    while (!isEmpty())
    {
        postfix[j] = pop();
        j++;
    }
    postfix[j] = '\0';

    return postfix;
}

void main()
{
    char infix[] = "a+b*c+d";
    printf("infix: %s\n", infix);
    strrev(infix);
    char *prefix = infix_to_postfix(infix);
    strrev(prefix);
    printf("prefix : %s\n", prefix);
}
