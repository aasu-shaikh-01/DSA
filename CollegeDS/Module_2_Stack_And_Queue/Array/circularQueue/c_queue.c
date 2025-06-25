#include <stdio.h>
#define MAXSIZE 5

int queue[MAXSIZE], rear = -1, front = 0;

void Enquue()
{
    int elem;
    if (rear == MAXSIZE - 1 && front == 0)
    {
        printf("queue is overflow!");
    }
    else
    {
        printf("Enter an element: ");
        scanf("%d", &elem);
        // rear++;
        rear = rear + 1 % MAXSIZE;
        queue[rear] = elem;
    }
}

void Dequeue()
{
    if (rear == -1 || front > rear)
    {
        printf("queue is underflow\n");
    }
    else
    {
        front = front + 1 % MAXSIZE;
    }
}

void display()
{
    if (rear == 0 || front > rear)
    {
        printf("queue is underflow!\n");
    }
    else
    {

        for (int i = front; i <= rear; i++)
        {
            printf("%d\t", queue[i]);
        }
    }
}

void peek()
{
    if (rear == 0 || front > rear)
    {
        printf("queue is underflow!\n");
    }
    else
    {
        printf("%d\n", queue[front]);
    }
}

int main()
{
    int choice;

    do
    {
        printf(" \n______________queue Menu _______________\n");
        printf("1. Enquue\n");
        printf("2. Dequeue\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            Enquue();
            break;
        case 2:
            Dequeue();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            printf("Exiting...");
        default:
            return 0;
        }
    } while (choice != 5);
    return 0;
}