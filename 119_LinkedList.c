#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void display(struct node *head)
{
    printf("Linked List data are : \n");
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
}
void main()
{
    struct node *head, *second, *third, *fourth, *fifth;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    fifth = (struct node *)malloc(sizeof(struct node));

    head->data = 12;
    head->next = second;

    second->data = 34;
    second->next = third;

    third->data = 56;
    third->next = fourth;

    fourth->data = 78;
    fourth->next = fifth;

    fifth->data = 90;
    fifth->next = NULL;

    display(head);
}