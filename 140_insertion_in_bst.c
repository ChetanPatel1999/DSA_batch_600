#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int num)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->data = num;
    new->right = NULL;
    new->left = NULL;
    return new;
}

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void insertion(struct node **root, int element) // 26
{
    struct node *current = *root;
    struct node *parent = NULL;
    while (current != NULL)
    {
        parent = current;
        if (current->data == element)
        {
            printf("\nelement is duplicate");
            return;
        }
        else if (element > current->data)
        {
            current = current->right;
        }
        else
        {
            current = current->left;
        }
    }

    if (parent == NULL)
    {
        // empty bst
        *root = createNode(element);
    }
    else if (element > parent->data)
    {
        parent->right = createNode(element);
    }
    else
    {
        parent->left = createNode(element);
    }
}

void main()
{
    struct node *root = NULL;

    insertion(&root, 45);
    insertion(&root, 15);
    insertion(&root, 79);
    insertion(&root, 90);
    insertion(&root, 10);
    insertion(&root, 55);
    insertion(&root, 12);
    insertion(&root, 20);
    insertion(&root, 50);

    printf("\ninorder display of tree : ");
    inorder(root);
}