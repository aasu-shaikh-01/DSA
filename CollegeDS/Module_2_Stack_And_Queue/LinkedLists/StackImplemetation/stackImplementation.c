// #include <stdio.h>
// #include <stdlib.h>

// struct Node
// {
//     int data;
//     struct Node *next;
// } *new, *temp, *top = NULL;

// void traverse()
// {
//     temp = top;
//     printf("Elements are: \n");
//     while (temp != NULL)
//     {
//         printf("%d\n", temp->data);
//         temp = temp->next;
//     }
// }

// void push()
// {
//     int value;
//     printf("Enter the value: ");
//     scanf("%d", &value);
//     new = (struct Node *)malloc(sizeof(struct Node));
//     if (new == NULL)
//     {
//         printf("Unable to push the element. Memory allocation failed.\n");
//         return; // Exit the function if memory allocation fails
//     }
//     new->data = value;
//     if (top == NULL)
//     {
//         new->next = NULL;
//         top = new;
//     }
//     else
//     {
//         new->next = top;
//         top = new;
//     }
// }

// struct Node *pop()
// {
//     struct Node *deletedData;
//     if (top == NULL)
//     {
//         printf("Stack is underflow!"); // why even after pushing the values(nodes)
//     }
//     else
//     {
//         deletedData = top;
//         top = top->next;
//     }
//     return deletedData;
// }

// int main()
// {
//     char ch;
//     char popNode;
//     do
//     {
//         push();
//         printf("Do you want to PUSH nodes, y-yes, other key to exit: ");
//         scanf(" %c", &ch);
//     } while (ch == 'y');
//     traverse();
//     printf("Do you want to POP nodes, y-yes, other key to exit: ");
//     scanf(" %c", &popNode);
//     if (popNode == 'y')
//     {
//         struct Node *poppedValue = pop();
//         printf("Popped Value is: %d\n", poppedValue->data);
//         traverse();
//     }
//     return 0;
// }

// Stack implementaion using linked list:

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *new, *top = NULL, *head, *temp;

void push()
{
    int value;
    printf("Enter the value: ");
    scanf("%d", &value);

    new = (struct Node *)malloc(sizeof(struct Node));
    new->data = value;
    new->next = NULL;

    new->next = top;
    top = new;
}
void pop()
{
    printf("Popped element is: %d\n", top->data);
    top = top->next;
}
void peek()
{
    printf("element is: %d\n", top->data);
}
void traverse()
{
    temp = top;

    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main()
{
    char ch;
    do
    {
        int value;
        printf("Enter the value to create a stack: ");
        scanf("%d", &value);

        new = (struct Node *)malloc(sizeof(struct Node));
        new->data = value;
        new->next = NULL;

        if (top == NULL)
        {
            top = new;
            head = new;
        }
        else
        {
            new->next = top;
            top = new;
        }
        printf("c - continue, other key to exit: ");
        scanf(" %c", &ch);
    } while (ch == 'c');

    traverse();
    printf("********************************\n");
    printf("1 - Push\n");
    printf("2 - Pop\n");
    printf("3 - Peek\n");
    printf("********************************\n");
    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        push();
        traverse();
        break;
    case 2:
        pop();
        traverse();
        break;
    case 3:
        peek();
        traverse();
        break;
    default:
        printf("Thank You!");
    }
    return 0;
}