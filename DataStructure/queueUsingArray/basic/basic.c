#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isFul(struct queue *qu)
{
    if (qu->r == qu->size - 1)
    {
        return 1;
    }
    return 0;
}
int isEmpty(struct queue *qu)
{
    if (qu->f == qu->r)
    {
        return 1;
    }
    return 0;
}

int enqueue(struct queue *qu, int elem)
{
    if (isFul(qu))
    {
        return printf("Queue is full You can't insert rest of the elements from %d\n", elem);
    }
    else
    {
        qu->r = qu->r + 1;
        qu->arr[qu->r] = elem;
    }
    return 0;
}

int dequeue(struct queue *qu)
{
    if (isEmpty(qu))
    {
        return printf("Queue is Empty");
    }
    else
    {
        qu->f = qu->f + 1;
    }
    return 0;
}

void show(struct queue *qu)
{
    for (int i = qu->f + 1; i <= qu->r; i++)
    {
        printf("element at index %d is %d\n", i, qu->arr[i]);
    }
}

int main()
{
    struct queue *q;
    q = (struct queue *)malloc(sizeof(struct queue));
    q->size = 5;
    q->f = q->r = -1;
    q->arr = (int *)malloc(q->size * sizeof(int));

    enqueue(q, 5);
    enqueue(q, 6);
    enqueue(q, 7);
    enqueue(q, 8);
    enqueue(q, 9);

    dequeue(q);
    dequeue(q);
    dequeue(q);
    dequeue(q);

    enqueue(q, 10);
    // printf("nqueued Element is %d", val);
    show(q);
    return 0;
}