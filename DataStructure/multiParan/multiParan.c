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

char stackTop(struct stack *s)
{
    return s->arr[s->top];
}

int match(char a, char b)
{
    if (a == '(' && b == ')')
    {
        return 1;
    }
    if (a == '{' && b == '}')
    {
        return 1;
    }
    if (a == '[' && b == ']')
    {
        return 1;
    }
    return 0;
}

int paranthesisMatch(char *exp)
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 100;
    s->top = -1;
    s->arr = (char *)malloc(s->size * sizeof(char));
    char popped_ch;

    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
        {
            push(s, exp[i]);
        }
        else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
        {
            if (isEmpty(s))
            {
                return 0;
            }
            popped_ch = pop(s);
            if (!match(popped_ch, exp[i]))
            {
                return 0;
            }
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
    char *exp = "((8*(9)))";
    if (paranthesisMatch(exp))
    {
        printf("The paranthesis are balanced");
    }
    else
    {
        printf("The paranthesis are not balanced.");
    };

    return 0;
}