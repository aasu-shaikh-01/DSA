#include <stdio.h>
#include <stdlib.h>
struct circularQueue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isEmpty(struct circularQueue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    return 0;
}

int isFull(struct circularQueue *q)
{
    if ((q->r + 1) % q->size == q->f)
    {
        return 1;
    }
    return 0;
}

void enqueue(struct circularQueue *q, int val)
{
    if (isFull(q))
    {
        printf("circularQueue is full\n");
        // return 1;
    }
    else
    {
        // q->f = q->f + 1;
        q->r = (q->r + 1) % q->size;
        q->arr[q->r] = val;
    }
};

void dequeue(struct circularQueue *q)
{
    if (isEmpty(q))
    {
        printf("circularQueue is empty");
    }
    else
    {
        q->f = (q->f + 1) % q->size;
    }
}

void show(struct circularQueue *q)
{
    if (isEmpty(q))
    {
        printf("Queue is empty\n");
        return;
    }
    int i = (q->f + 1) % q->size;
    while (i != (q->r + 1) % q->size)
    {
        printf("%d\n", q->arr[i]);
        i = (i + 1) % q->size;
    }
}

int main()
{
    struct circularQueue q;
    q.size = 5;
    q.arr = (int *)malloc(q.size * sizeof(int));
    q.f = q.r = 0;
    enqueue(&q, 5);
    enqueue(&q, 6);
    enqueue(&q, 7);
    enqueue(&q, 8);
    dequeue(&q);
    enqueue(&q, 9);
    show(&q);
    return 0;
}
