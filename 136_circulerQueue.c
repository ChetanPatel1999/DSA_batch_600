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
    if (q1->rear == -1)
    {
        return 1;
    }
    return 0;
}

int isFull(struct queue *q1)
{
    if ((q1->rear + 1) % q1->size == q1->front)
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
            q1->rear = (q1->rear + 1) % q1->size;
            q1->arr[q1->rear] = num;
        }
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
        if (q1->front == q1->rear)
        {
            q1->front = q1->rear = -1;
        }
        else
        {
            q1->front = (q1->front + 1) % q1->size;
        }

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

void display(struct queue *q1)
{
    if (isEmpty(q1))
    {
        printf("\nqueue is underflow we cant display\n");
    }
    else
    {
        printf("circuler queue element are : ");
        int i = q1->front;
        while (i != q1->rear) // 1
        {
            printf("%d ", q1->arr[i]);
            i = (i + 1) % q1->size;
        }
        printf("%d\n", q1->arr[i]);
    }
}
void main()
{
    struct queue *q1 = (struct queue *)malloc(sizeof(struct queue));
    q1->size = 5;
    q1->front = -1;
    q1->rear = -1;
    q1->arr = (int *)malloc(q1->size * sizeof(int));

    enqueue(q1, 45);
    enqueue(q1, 35);
    enqueue(q1, 15);
    enqueue(q1, 95);
    enqueue(q1, 35);
    display(q1);
    printf("%d element is dequeue \n", dequeue(q1));
    printf("%d element is dequeue \n", dequeue(q1));
    printf("%d element is dequeue \n", dequeue(q1));
    enqueue(q1, 100);
    enqueue(q1, 200);
    enqueue(q1, 300);
    display(q1);
    printf("%d element is dequeue \n", dequeue(q1));
    printf("%d element is dequeue \n", dequeue(q1));
    printf("%d element is dequeue \n", dequeue(q1));
    printf("%d element is dequeue \n", dequeue(q1));
    printf("%d element is dequeue \n", dequeue(q1));
    printf("%d element is dequeue \n", dequeue(q1));
    printf("%d element is dequeue \n", dequeue(q1));
    enqueue(q1, 400);
    enqueue(q1, 500);
    enqueue(q1, 600);
}