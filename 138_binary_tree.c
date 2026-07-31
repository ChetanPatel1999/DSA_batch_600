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

void main()
{
    struct node *root, *l1, *r1, *l1l2, *l1r2, *r1l2, *r1r2;
    root = createNode(5);
    l1 = createNode(12);
    r1 = createNode(7);
    l1l2 = createNode(17);
    l1r2 = createNode(9);
    r1l2 = createNode(3);
    r1r2 = createNode(4);

    root->left = l1;
    root->right = r1;
    l1->left = l1l2;
    l1->right = l1r2;
    r1->left = r1l2;
    r1->right = r1r2;
}