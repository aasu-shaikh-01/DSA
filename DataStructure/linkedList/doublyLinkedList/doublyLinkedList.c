#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d \n", ptr->data);
        ptr = ptr->next;
    }
    // printf("now another \n");
    // ptr = ptr->prev;
    // do
    // {
    //     printf("Element: %d \n", ptr->data);
    //     ptr = ptr->prev;
    // } while (ptr != NULL);
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes.
    head->data = 7;
    head->prev = NULL;
    head->next = second;

    // Link second and third nodes.
    second->data = 11;
    second->prev = head;
    second->next = third;

    // Link third and fourth nodes.
    third->data = 66;
    third->prev = second;
    third->next = fourth;

    // Terminate the list at the  fourth node.
    fourth->data = 70;
    fourth->prev = third;
    fourth->next = NULL;

    linkedListTraversal(head);
    // linkedListTraverse(head);

    return 0;
}