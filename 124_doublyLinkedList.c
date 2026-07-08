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
        printf("\nyour doubly linked list is already creted\n");
    }
}
void display_list()
{
    if (head != NULL)
    {
        printf("\ndoubly linked list element are  :  \n");
        struct node *temp = head;
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");

        struct node *tail;
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        tail = temp;

        printf("doubly linked list reverse element are  :  \n");
        while (tail != NULL)
        {
            printf("%d ", tail->data);
            tail = tail->prev;
        }
        printf("\n");
    }
    else
    {
        printf("\nfirst create doubly linked list then display\n");
    }
}

void insert_at_frist()
{
    if (head != NULL)
    {
        int num;
        struct node *new;
        printf("enter num : ");
        scanf("%d", &num);
        new = (struct node *)malloc(sizeof(struct node));
        new->data = num;
        new->next = head;
        new->prev = NULL;
        head->prev = new;
        head = new;
    }
    else
    {
        printf("\nfirst create doubly linked list then insert\n");
    }
}
void delete_at_frist()
{
    if (head != NULL)
    {
        if (head->next == NULL)
        {
            printf("\n%d element is deleted \n", head->data);
            free(head);
            head = NULL;
        }
        else
        {
            struct node *temp = head;
            head->next->prev = NULL;
            head = head->next;
            printf("\n%d element is deleted \n", temp->data);
            free(temp);
        }
    }
    else
    {
        printf("\nfirst create doubly linked list then delete\n");
    }
}
void insert_at_last()
{
    if (head != NULL)
    {
        int num;
        struct node *new;
        printf("enter num : ");
        scanf("%d", &num);
        new = (struct node *)malloc(sizeof(struct node));
        new->data = num;
        new->next = NULL;
        new->prev = NULL;
        struct node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = new;
        new->prev = temp;
    }
    else
    {
        printf("\nfirst create doubly linked list then insert\n");
    }
}
void delete_at_last()
{
    if (head != NULL)
    {
        if (head->next == NULL)
        {
            printf("\n%d element is deleted \n", head->data);
            free(head);
            head = NULL;
        }
        else
        {
            struct node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->prev->next = NULL;
            printf("\n%d element is deleted \n", temp->data);
            free(temp);
        }
    }
    else
    {
        printf("\nfirst create doubly linked list then delete\n");
    }
}
void insert_at_index()
{
    if (head != NULL)
    {
        int index;
        printf("enter a index : ");
        scanf("%d", &index);
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
                temp = temp->next;
                c++;
            }
            if (c == index)
            {
                insert_at_last();
            }
            else if (index < 0 || index > c)
            {
                printf("\ninvalid index number");
            }
            else
            {
                temp = head;
                int i = 0;
                while (i < index)
                {
                    temp = temp->next;
                    i++;
                }

                int num;
                struct node *new;
                printf("enter num : ");
                scanf("%d", &num);
                new = (struct node *)malloc(sizeof(struct node));
                new->data = num;
                new->prev = temp->prev;
                new->next = temp;
                temp->prev->next = new;
                temp->prev = new;
            }
        }
    }
    else
    {
        printf("\nfirst create doubly linked list then insert\n");
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
        printf("Press 10 to reverse display\n");
        printf("Press 11 to exit\n");
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
        // case 8:
        //     delete_at_index();
        //     break;
        // case 9:
        //     search_element();
        //     break;
        case 11:
            exit(0);
            break;
        default:
            printf("Entered wrong number\n");
            break;
        }
    }
}