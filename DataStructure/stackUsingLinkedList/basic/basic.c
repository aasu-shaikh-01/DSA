#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// struct Node *top = NULL;

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int isEmpty(struct Node *ptr)
{
    if (ptr == NULL)
    {
        return 1;
    }
    return 0;
}

int isFull(struct Node *tp)
{
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    if (p == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

struct Node *push(struct Node *tp, int x)
{
    if (isFull(tp))
    {
        printf("stack is full");
        // return 1;
    }
    else
    {
        struct Node *n = (struct Node *)malloc(sizeof(struct Node));
        n->data = x;
        n->next = tp;
        tp = n;
        return tp;
    }
}

int pop(struct Node **tp)
{
    if (isEmpty(*tp))
    {
        printf("Stack is underflow");
    }
    else
    {
        struct Node *n = *tp;
        *tp = (*tp)->next;
        int x = n->data;
        free(n);
        return x;
    }
}

int main()
{
    struct Node *top = NULL;

    top = push(top, 1);
    top = push(top, 2);
    top = push(top, 3);
    top = push(top, 4);
    top = push(top, 5);
    linkedListTraversal(top);
    int element = pop(&top);
    // printf("%d", element);
    linkedListTraversal(top);

    return 0;
}
