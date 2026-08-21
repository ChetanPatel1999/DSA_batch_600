#include <stdio.h>
#define size 100
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

void main()
{
    int adj_met[7][7] = {
        {0, 1, 1, 1, 0, 0, 0},
        {1, 1, 0, 0, 0, 0, 0},
        {1, 1, 0, 1, 1, 0, 0},
        {1, 0, 1, 0, 1, 0, 0},
        {0, 0, 1, 1, 0, 1, 1},
        {0, 0, 0, 0, 1, 0, 0},
        {0, 0, 0, 0, 1, 0, 0}};

    int visited[7] = {0, 0, 0, 0, 0, 0, 0};

    int i = 6;
    printf("%d ", i);
    visited[i] = 1;
    enque(i);
    while (!isEmpty())
    {
        int node = deque();
        int j;
        for (j = 0; j < 7; j++)
        {
            if (adj_met[node][j] == 1 && visited[j] == 0)
            {
                printf("%d ", j);
                visited[j] = 1;
                enque(j);
            }
        }
    }
}