#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *ptr, int elem)
{
    if (!isFull(ptr))
    {
        ptr->top++;
        ptr->arr[ptr->top] = elem;
        printf("Pushed element is: %d\n", elem);
    }
    else
    {
        printf("stack is overflow you can't push %d\n", elem);
    }
}

void pop(struct stack *ptr)
{
    if (!isEmpty(ptr))
    {
        int val = ptr->arr[ptr->top];
        printf("Popped element is: %d\n", val);
        ptr->top--;
    }
    else
    {
        printf("stack is empty or underflow");
    }
}

void elements(struct stack *ptr)
{
    for (int i = 0; i < ptr->size; i++)
    {
        printf("element is: %d\n", ptr->arr[i]);
    }
}

int main()
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 5;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    push(s, 2);
    push(s, 4);
    push(s, 6);
    push(s, 8);
    push(s, 10);
    push(s, 10);
    // pop(s);

    elements(s);

    // if (isEmpty(s))
    // {
    //     printf("The stack is empty");
    // }
    // else
    // {
    //     // printf("The stack is not empty.\n");
    //     pop(s);
    // };

    // if (isFull(s))
    // {
    //     printf("The stack is full");
    // }
    // else
    // {
    //     // printf("The stack is not full.");
    //     push(s, 4);
    // };

    return 0;
}