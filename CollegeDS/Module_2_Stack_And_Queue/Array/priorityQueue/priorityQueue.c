#include <stdio.h>
struct queue
{
    int value;
    int priority;
} pq[5];

int size = 0;

// Enqueue function
void enqueue(int value, int priority)
{
    if (size == 5)
    {
        printf("Priority Queue is full\n");
        return;
    }
    pq[size].value = value;
    pq[size].priority = priority;
    size++;
}

// Dequeue function (removes highest priority)
void dequeue()
{
    if (size == 0)
    {
        printf("Priority Queue is empty\n");
        return;
    }

    int i, pos = 0;
    for (i = 1; i < size; i++)
    {
        if (pq[pos].priority > pq[i].priority)
        {
            pos = i;
        }
    }

    printf("Dequeued: %d (priority: %d)\n", pq[pos].value, pq[pos].priority);

    // Shift elements
    for (i = pos; i < size - 1; i++)
    {
        pq[i] = pq[i + 1];
    }
    size--;
}

// Display function
void display()
{
    if (size == 0)
    {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue contents:\n");
    for (int i = 0; i < size; i++)
    {
        printf("Value: %d, Priority: %d\n", pq[i].value, pq[i].priority);
    }
}

// Main function
int main()
{
    enqueue(10, 2);
    enqueue(5, 1);
    enqueue(20, 3);

    display();

    dequeue();
    display();

    return 0;
}
