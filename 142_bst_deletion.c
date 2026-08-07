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

struct node *insertion(struct node *root, int element) // 600 , 45
{
    if (root == NULL)
    {
        return createNode(element);
    }
    else if (element > root->data)
    {
        root->right = insertion(root->right, element);
    }
    else
    {
        root->left = insertion(root->left, element);
    }
    return root;
}

struct node *inorderSuccesor(struct node *root)
{
    while (root->left != NULL)
    {
        root = root->left;
    }
    return root;
}

struct node *delete(struct node *root, int element)
{
    if (root == NULL)
    {
        return root;
    }

    // search delete elemenet
    if (element > root->data)
    {
        root->right = delete(root->right, element);
    }
    else if (element < root->data)
    {
        root->left = delete(root->left, element);
    }
    else
    {
        // element found
        if (root->right == NULL)
        {
            struct node *temp = root->left;
            free(root);
            return temp;
        }
        else if (root->left == NULL)
        {
            struct node *temp = root->right;
            free(root);
            return temp;
        }
        else
        {
            struct node *temp = inorderSuccesor(root->right);
            root->data = temp->data;
            root->right = delete(root->right, temp->data);
        }
    }
    return root;
}
void main()
{
    struct node *root = NULL;

    root = insertion(root, 45);
    root = insertion(root, 15);
    root = insertion(root, 79);
    root = insertion(root, 90);
    root = insertion(root, 10);
    root = insertion(root, 55);
    root = insertion(root, 12);
    root = insertion(root, 20);
    root = insertion(root, 50);

    printf("\ninorder display of tree : ");
    inorder(root);

    root = delete(root, 45);

    printf("\ninorder display of tree : ");
    inorder(root);
}