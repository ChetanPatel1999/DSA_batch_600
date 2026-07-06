#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL;

void create_list()
{
    if (head == NULL)
    {
        int num;
        struct node *temp;
        printf("enter num : ");
        scanf("%d", &num);
        head = (struct node *)malloc(sizeof(struct node));
        head->data = num;
        head->prev = NULL;
        head->next = NULL;
        temp = head;
        while (1)
        {
            printf("you want to add more node press 1 : ");
            scanf("%d", &num);
            if (num == 1)
            {
                struct node *new;
                printf("enter num : ");
                scanf("%d", &num);
                new = (struct node *)malloc(sizeof(struct node));
                new->data = num;
                temp->next = new;
                new->prev = temp;
                new->next = NULL;
                temp = new;
            }
            else
            {
                break;
            }
        }
    }
    else
    {
        printf("your doubly linked list is already creted");
    }
}
void display_list()
{
    if (head != NULL)
    {
        printf("doubly linked list element are  :  \n");
        struct node *temp = head;
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
    else
    {
        printf("first create doubly linked list then display");
    }
}

void main()
{
    int num;
    while (1)
    {
        printf("\nWelcome to my Doubly Linked List Program:\n");
        printf("Press 1 to create list\n");
        printf("Press 2 to display\n");
        printf("Press 3 to insert element at the frist\n");
        printf("Press 4 to delete element at the frist\n");
        printf("Press 5 to insert element at last\n");
        printf("Press 6 to delete element at the last\n");
        printf("Press 7 to insert element at index\n");
        printf("Press 8 to delete element at index\n");
        printf("Press 9 to search element in list\n");
        printf("Press 10 to exit\n");
        printf("choose option : ");
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            create_list();
            break;
        case 2:
            display_list();
            break;
        // case 3:
        //     insert_at_frist();
        //     break;
        // case 4:
        //     delete_at_frist();
        //     break;
        // case 5:
        //     insert_at_last();
        //     break;
        // case 6:
        //     delete_at_last();
        //     break;
        // case 7:
        //     insert_at_index();
        //     break;
        // case 8:
        //     delete_at_index();
        //     break;
        // case 9:
        //     search_element();
        //     break;
        case 10:
            exit(0);
        default:
            printf("Entered wrong number\n");
            break;
        }
    }
}