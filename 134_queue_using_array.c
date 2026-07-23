#include <stdio.h>
#define size 5
int queue[size];
int front = -1;
int rear = -1;

int isEmpty()
{
    if (front == -1 && rear == -1 || front > rear)
    {
        return 1;
    }
    return 0;
}
int isFull()
{
    if (rear == size - 1)
    {
        return 1;
    }
    return 0;
}
void enque(int num)
{
    if (isFull())
    {
        printf("\nqueue is overflow we cant enqueu\n");
    }
    else
    {
        if (front == -1 && rear == -1)
        {
            front = 0;
            rear = 0;
            queue[rear] = num;
        }
        else
        {
            rear++; // 2
            queue[rear] = num;
        }
    }
}
int deque()
{
    if (isEmpty())
    {
        printf("\nqueue is underflow we cant deque element\n");
        return -1;
    }
    else
    {
        int num = queue[front];
        front++;
        return num;
    }
}
int peek()
{
    if (isEmpty())
    {
        printf("\nqueue is underflow we cant peek\n");
    }
    else
    {
        return queue[front];
    }
}
void display()
{
    if (isEmpty())
    {
        printf("\n queue is underflow we cant display");
    }
    else
    {
        printf("queue element are : ");
        int i;
        for (i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}
void main()
{
    enque(12);
    enque(56);
    enque(23);
    enque(20);
    display();
    printf("%d element is peek from queue\n", peek());
    printf("%d element is deque from queue\n", deque());
    printf("%d element is deque from queue\n", deque());
    printf("%d element is peek from queue\n", peek());
}