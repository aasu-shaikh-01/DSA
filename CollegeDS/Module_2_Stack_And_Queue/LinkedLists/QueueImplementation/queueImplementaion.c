// #include <stdio.h>
// #include <stdlib.h>

// struct Node
// {
//     int data;
//     struct Node *next;
// } *new, *temp, *front = NULL, *rear = NULL;

// void traverse()
// {
//     temp = front;
//     if (front != NULL) // No need of this 'if' block.
//     {
//         printf("Elements are: \n");
//     }
//     while (temp != NULL)
//     {
//         printf("%d\n", temp->data);
//         temp = temp->next;
//     }
// }

// void enqueue()
// {
//     int value;
//     printf("Enter the value: ");
//     scanf("%d", &value);
//     new = (struct Node *)malloc(sizeof(struct Node));
//     if (new == NULL)
//     {
//         printf("Unable to enqueue the element. Memory allocation failed.\n");
//         return;
//     }
//     new->data = value;
//     new->next = NULL;
//     if (rear == NULL)
//     {
//         front = new;
//         rear = new;
//     }
//     else
//     {
//         rear->next = new;
//         rear = new;
//     }
// }

// struct Node *dequeue()
// {
//     struct Node *deletedData = front;

//     if (front == NULL)
//     {
//         printf("Queue is underflow!");
//     }
//     else
//     {
//         front = front->next;
//     }
//     return deletedData;
// }

// int main()
// {
//     char ch;
//     char dequeueNode;
//     do
//     {
//         enqueue();
//         printf("Do you want to enqueue nodes, y-yes, other key to exit: ");
//         scanf(" %c", &ch);
//     } while (ch == 'y');
//     traverse();
//     do
//     {
//         printf("Do you want to dequeue nodes, y-yes, other key to exit: ");
//         scanf(" %c", &dequeueNode);
//         if (dequeueNode == 'y')
//         {
//             struct Node *dequeuedValue = dequeue();
//             printf("dequeued Value is: %d\n", dequeuedValue->data);
//             traverse();
//         }
//     } while (dequeueNode == 'y');
//     return 0;
// }

// jjj

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *new, *rear = NULL, *front = NULL, *temp;

void enqueue()
{
    int value;
    printf("Enter the value: ");
    scanf("%d", &value);

    new = (struct Node *)malloc(sizeof(struct Node));
    new->data = value;
    new->next = NULL;

    rear->next = new;
    rear = new;
}
void dequeue()
{
    printf("Enqueued element is: %d\n", front->data);
    front = front->next;
}
void peek()
{
    printf("element is: %d\n", rear->data);
}
void traverse()
{
    temp = front;

    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main()
{
    char ch;
    char ex;
    do
    {
        int value;
        printf("Enter the value to create a queue: ");
        scanf("%d", &value);

        new = (struct Node *)malloc(sizeof(struct Node));
        new->data = value;
        new->next = NULL;

        if (rear == NULL && front == NULL)
        {
            front = new;
            rear = new;
        }
        else
        {
            rear->next = new;
            rear = new;
        }
        printf("c - continue, other key to exit: ");
        scanf(" %c", &ch);
    } while (ch == 'c');

    traverse();
    do
    {

        printf("********************************\n");
        printf("1 - enqueue\n");
        printf("2 - dequeue\n");
        printf("3 - Peek\n");
        printf("********************************\n");

        int choice;
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue();
            traverse();
            break;
        case 2:
            dequeue();
            traverse();
            break;
        case 3:
            peek();
            traverse();
            break;
        default:
            printf("Thank You!");
        }
        printf("Do you want to exit yes - y, No - n: ");
        scanf(" %c", &ex);
    } while (ex == 'n');
    return 0;
}