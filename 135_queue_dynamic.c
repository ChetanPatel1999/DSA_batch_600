#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int size;
    int front;
    int rear;
    int *arr;
};

int isEmpty(struct queue *q1)
{
    if (q1->front == -1 && q1->rear == -1 || q1->front > q1->rear)
    {
        return 1;
    }
    return 0;
}

int isFull(struct queue *q1)
{
    if (q1->rear == q1->size - 1)
    {
        return 1;
    }
    return 0;
}

void enqueue(struct queue *q1, int num)
{
    if (isFull(q1))
    {
        printf("\nqueue is overflow , we cant enqueue\n\n");
    }
    else
    {
        if (q1->front == -1 && q1->rear == -1)
        {
            q1->front = q1->rear = 0;
            q1->arr[q1->rear] = num;
        }
        else
        {
            q1->rear++;
            q1->arr[q1->rear] = num;
        }
    }
}
void display(struct queue *q1)
{
    if (isEmpty(q1))
    {
        printf("\nqueue is underflow , we cant display\n\n");
    }
    else
    {
        printf("queue element are : ");
        int i;
        for (i = q1->front; i <= q1->rear; i++)
        {
            printf("%d ", q1->arr[i]);
        }
        printf("\n");
    }
}

int dequeue(struct queue *q1)
{
    if (isEmpty(q1))
    {
        printf("\nqueue is underflow , we cant dequeue\n\n");
        return -1;
    }
    else
    {
        int num = q1->arr[q1->front];
        q1->front++;
        return num;
    }
}

int peek(struct queue *q1)
{
    if (isEmpty(q1))
    {
        printf("\nqueue is underflow , we cant peek\n\n");
        return -1;
    }
    else
    {
        return q1->arr[q1->front];
    }
}
void main()
{
    struct queue *q1 = (struct queue *)malloc(sizeof(struct queue));
    q1->size = 5;
    q1->front = -1;
    q1->rear = -1;
    q1->arr = (int *)malloc(q1->size * sizeof(int));

    struct queue *q2 = (struct queue *)malloc(sizeof(struct queue));
    q2->size = 10;
    q2->front = -1;
    q2->rear = -1;
    q2->arr = (int *)malloc(q1->size * sizeof(int));

    enqueue(q1, 78);
    enqueue(q1, 67);
    enqueue(q1, 37);
    enqueue(q1, 8);
    display(q1);
    printf("%d element is dequeue\n", dequeue(q1));
    printf("%d element is dequeue\n", dequeue(q1));
    display(q1);
    printf("%d element is peek\n", peek(q1));

    display(q2);
}