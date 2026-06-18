#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;

void create_list()
{
    if (head == NULL)
    {
        int num;
        struct node *new, *temp;
        printf("enter a num : ");
        scanf("%d", &num);
        head = (struct node *)malloc(sizeof(struct node));
        head->data = num;
        head->next = NULL;
        temp = head;
        while (1)
        {
            printf("enter 1 if you want to add more element : ");
            scanf("%d", &num); // 1
            if (num == 1)
            {
                printf("enter a num : ");
                scanf("%d", &num); // 78
                new = (struct node *)malloc(sizeof(struct node));
                new->data = num;
                new->next = NULL;
                temp->next = new;
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
        printf("\nlist is already created\n");
    }
}

void display_list()
{
    if (head != NULL)
    {
        struct node *temp;
        temp = head; // 1500
        printf("\nlinked list element are : \n");
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next; // null
        }
        printf("\n");
    }
    else
    {
        printf("\nfirst create list then display\n");
    }
}
void insert_at_frist()
{
    if (head != NULL)
    {
        struct node *new = (struct node *)malloc(sizeof(struct node));
        int num;
        printf("enter a num : ");
        scanf("%d", &num);
        new->data = num;
        new->next = head;
        head = new;
    }
    else
    {
        printf("\nfirst create list then insert\n");
    }
}
void delete_at_frist()
{
    if (head != NULL)
    {
        struct node *temp;
        temp = head;
        head = head->next;
        printf("\n%d element is deleted\n", temp->data);
        free(temp);
    }
    else
    {
        printf("\nfirst create list then delete\n");
    }
}
void insert_at_last()
{

    if (head != NULL)
    {
        struct node *new = (struct node *)malloc(sizeof(struct node));
        int num;
        printf("enter a num : ");
        scanf("%d", &num);
        new->data = num;
        new->next = NULL;
        struct node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new;
    }
    else
    {
        printf("\nfirst create list then insert\n");
    }
}
void delete_at_last()
{

    if (head != NULL)
    {
        if (head->next == NULL)
        {
            struct node *temp = head;
            printf("\n%d is deleted from list\n", temp->data);
            free(temp);
            head = NULL;
        }
        else
        {
            struct node *temp = head, *prev;
            while (temp->next != NULL)
            {
                prev = temp;
                temp = temp->next;
            }
            prev->next = NULL;
            printf("\n%d is deleted from list\n", temp->data);
            free(temp);
        }
    }
    else
    {
        printf("\nfirst create list then delete\n");
    }
}
void insert_at_index()
{
    if (head != NULL)
    {
        int index;
        printf("enter index : ");
        scanf("%d", &index); // 0
        if (index == 0)
        {
            insert_at_frist();
        }
        else
        {
            struct node *temp = head;
            int c = 0;
            while (temp != NULL)
            {
                c++;
                temp = temp->next;
            }
            if (index == c)
            {
                insert_at_last();
            }
            else if (index > c || index < 0)
            {
                printf("\ninvalid index\n");
            }
            else
            {
                // insert at middle
            }
        }
    }
    else
    {
        printf("\nfirst create list then insert\n");
    }
}
void main()
{
    int num;
    while (1)
    {
        printf("\nWelcome to my Linked List Program:\n");
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
        case 3:
            insert_at_frist();
            break;
        case 4:
            delete_at_frist();
            break;
        case 5:
            insert_at_last();
            break;
        case 6:
            delete_at_last();
            break;
        case 7:
            insert_at_index();
            break;
        case 8:
            // delete_at_index();
            break;
        case 9:
            // search_element();
            break;
        case 10:
            exit(0); // Exit the program
        default:
            printf("Entered wrong number\n");
            break;
        }
    }
}