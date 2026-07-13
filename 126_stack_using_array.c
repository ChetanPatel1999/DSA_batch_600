#include <stdio.h>
#define size 5
int top = -1;
int arr[size];
int isEmpty()
{
    if (top == -1)
    {
        return 1;
    }
    return 0;
}

int isFull()
{
    if (top == size - 1)
    {
        return 1;
    }
    return 0;
}

void push(int num)
{
    if (isFull())
    {
        printf("\nstack is overflow we cant push element\n");
    }
    else
    {
        top++;
        arr[top] = num;
    }
}

void display()
{
    if (isEmpty())
    {
        printf("\nstack is underflow , we can not display\n");
    }
    else
    {
        int i;
        printf("stack element are : ");
        for (i = 0; i <= top; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}
int pop()
{
    if (isEmpty())
    {
        printf("\nstack is underflow , we cant pop item\n");
        return -1;
    }
    else
    {
        int num = arr[top];
        top--;
        return num;
    }
}

int peek()
{
    if (isEmpty())
    {
        printf("\nstack is under flow, we cant peek\n");
    }
    else
    {
        return arr[top];
    }
}

int count()
{
    if (isEmpty())
    {
        return 0;
    }
    else
    {
        return top + 1;
    }
}
void main()
{
    push(15);
    push(33);
    push(89);
    push(78);
    display();
    int delete = pop();
    printf("%d element is delete\n", delete);
    delete = pop();
    printf("%d element is delete\n", delete);
    display();
    printf("%d element is peek \n", peek());
    push(66);
    printf("%d element is peek \n", peek());
    printf("total element in stack = %d", count());
}