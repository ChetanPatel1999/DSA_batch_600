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

struct node *bst_search(struct node *root, int element) // 9
{
    if (root == NULL || root->data == element)
    {
        return root;
    }
    else if (element > root->data)
    {
        return bst_search(root->right, element);
    }
    else
    {
        return bst_search(root->left, element);
    }
}

struct node *iterableSearch(struct node *root, int element) // 55
{
    while (root != NULL)
    {
        if (root->data == element)
        {
            return root;
        }
        else if (element < root->data)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    return root;
}



void main()
{
    struct node *root, *l1, *r1, *l1l2, *l1r2, *r1l2, *r1r2, *l1l2r3, *r1l2l3;
    root = createNode(45);
    l1 = createNode(15);
    r1 = createNode(79);
    l1l2 = createNode(10);
    l1l2r3 = createNode(12);
    l1r2 = createNode(20);
    r1l2 = createNode(55);
    r1l2l3 = createNode(50);
    r1r2 = createNode(90);

    root->left = l1;
    root->right = r1;
    l1->left = l1l2;
    l1->right = l1r2;
    r1->left = r1l2;
    r1->right = r1r2;
    l1l2->right = l1l2r3;
    r1l2->left = r1l2l3;


    printf("inorder display of tree : ");
    inorder(root);

    int element = 9;
    if (iterableSearch(root, element) == NULL)
    {
        printf("\nelement is not found");
    }
    else
    {
        printf("\nelement is found");
    }
}