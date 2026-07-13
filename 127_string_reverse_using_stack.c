#include <stdio.h>
#define size 100
int top = -1;
char arr[size];
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

void push(char num)
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
char pop()
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

char peek()
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

    char name[] = "hello raj";
    char reverse[100];
    printf("name = %s\n", name);
    
    int i;
    for (i = 0; name[i] != '\0'; i++)
    {
        push(name[i]);
    }

    i = 0;
    while (isEmpty() != 1)
    {
        reverse[i] = pop();
        i++;
    }
    reverse[i] = '\0';


    printf("reverse = %s\n", reverse);
}