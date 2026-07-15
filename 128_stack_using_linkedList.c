#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
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
void push(int num)
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
void display()
{
    if (isEmpty())
    {
        printf("stack is underflow , we cant display");
    }
    else
    {
        struct node *temp = top;
        printf("stack element are : ");
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}
int pop()
{
    if (isEmpty())
    {
        return -1;
    }
    else
    {
        struct node *temp = top;
        int num = temp->data;
        top = top->next;
        free(temp);
        return num;
    }
}
void main()
{
    push(12);
    push(56);
    push(78);
    push(80);
    display();
    push(44);
    display();
    printf("%d element is pop \n", pop());
    printf("%d element is pop \n", pop());
    printf("%d element is pop \n", pop());
    printf("%d element is pop \n", pop());
    printf("%d element is pop \n", pop());
    printf("%d element is pop \n", pop());
    push(67);
    printf("%d element is pop \n", pop());
    printf("%d element is pop \n", pop());
}