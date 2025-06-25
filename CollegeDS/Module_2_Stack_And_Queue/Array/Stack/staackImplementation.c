#include <stdio.h>
#define MAXSIZE 10

int stack[MAXSIZE], top = -1;

void push();
void pop();
void peek();
void display();
int isEmpty();
int isFull();


int main()
{
    int choice;

    do
    {
        printf(" ______________Stack Menu _______________\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            break;
        default:
            return 0;
        }
    } while (choice != 5);
    return 0;
}

int isEmpty()
{
    printf("top inside the isEmpty function: %d\n", top);
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull()
{
    if (top == MAXSIZE - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push()
{
    int elem;
    if (isFull())
    {
        printf("Stack is overflow!");
    }
    else
    {
        printf("Enter an element: ");
        scanf("%d", &elem);
        top++;
        stack[top] = elem;
    }
    printf("top inside the push function: %d\n", top);
}

void pop()
{
    if (isEmpty())
    {
        printf("stack is underflow\n");
    }
    else
    {
        top--;
    }
}
void peek()
{
    if (isEmpty())
    {
        printf("stack is underflow\n");
    }
    else
    {
        printf("%d", stack[top]);
    }
}
void display()
{
    if (isEmpty())
    {
        printf("Stack is underflow!\n");
    }
    else
    {
        for (int i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}