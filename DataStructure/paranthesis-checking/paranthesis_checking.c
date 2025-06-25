#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    char *arr;
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

void push(struct stack *ptr, char elem)
{
    if (!isFull(ptr))
    {
        ptr->top++;
        ptr->arr[ptr->top] = elem;
        // printf("Pushed element is: %d\n", elem);
    }
    else
    {
        printf("stack is overflow you can't push %d\n", elem);
    }
}

char pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("stack is empty or underflow");
        return -1;
    }
    else
    {
        char val = ptr->arr[ptr->top];
        // printf("Popped element is: %d\n", val);
        ptr->top--;
        return val;
    }
}

int paranthesisMatch(char *exp)
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 100;
    s->top = -1;
    s->arr = (char *)malloc(s->size * sizeof(char));

    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
        {
            push(s, '(');
        }
        else if (exp[i] == ')')
        {
            if (isEmpty(s))
            {
                return 0;
            }
            pop(s);
        }
    }
    if (isEmpty(s))
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
    char *exp = "8*(9))";
    if (paranthesisMatch(exp))
    {
        printf("The paranthesis is matching");
    }
    else
    {
        printf("The paranthesis is not matching.");
    };

    return 0;
}
