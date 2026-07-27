#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front = NULL, *rear = NULL;
int isEmpty()
{
    if (front == NULL)
    {
        return 1;
    }
    return 0;
}
void enqueue(int num)
{

    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->data = num;
    new->next = NULL;
    if (isEmpty())
    {
        front = new;
        rear = new;
    }
    else
    {
        rear->next = new;
        rear = new;
    }
}
int dequeue()
{
    if (isEmpty())
    {
        printf("\nqueue is underflow we cant dequeue\n");
        return -1;
    }
    else
    {
        struct node *temp = front;
        int num = temp->data;
        front = front->next;
        free(temp);
        return num;
    }
}
void display()
{
    if (isEmpty())
    {
        printf("\nqueue is underflow we cant display\n");
    }
    else
    {
        printf("queue element are : ");
        struct node *temp = front;
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}
void main()
{
    enqueue(12);
    enqueue(89);
    enqueue(99);
    enqueue(66);
    display();
    printf("%d element is deleted \n", dequeue());
    printf("%d element is deleted \n", dequeue());
    printf("%d element is deleted \n", dequeue());
    printf("%d element is deleted \n", dequeue());
    display();
    enqueue(12);
    enqueue(89);
    enqueue(99);
    enqueue(66);
    display();
}