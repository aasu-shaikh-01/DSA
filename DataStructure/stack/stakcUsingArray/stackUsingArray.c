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

int main()
{
    // struct stack s;
    // s.size = 80;
    // s.top = -1;
    // s.arr = (int *)malloc(s.size * sizeof(int));

    struct stack *s = (struct stack *)malloc(sizeof(struct stack)); // Allocate memory for struct stack
    s->size = 5;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    s->arr[0] = 10;
    s->top++;
    s->arr[0] = 10;
    s->top++;
    s->arr[0] = 10;
    s->top++;
    s->arr[0] = 10;
    s->top++;

    // s->arr[0] = 10;
    // s->top++;

    // if (isEmpty(s))
    // {
    //     printf("The stack is empty"); // why this is not printing?
    // }
    // else
    // {
    //     printf("The stack is not empty.");
    //     printf("%d", s->arr[0]);
    // };

    if (isFull(s))
    {
        printf("The stack is full");
    }
    else
    {
        printf("The stack is not full.");
    };

    return 0;
}
