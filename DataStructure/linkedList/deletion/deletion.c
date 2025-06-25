#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next; // self referencing structure
};

// struct Node *deleteFromFirst(struct Node *head)
// {
//     struct Node *p = head->next;
//     head = p;
//     return head;
// }
// or:

// struct Node *deleteFromFirst(struct Node *head)
// {
//     struct Node *ptr = head;
//     head = head->next;
//     free(ptr);
//     return head;
// }

// struct Node *deleteFromLast(struct Node *head)
// {
//     struct Node *p = head;
//     struct Node *q = head->next;
//     while (q->next != NULL)
//     {
//         p = p->next;
//         q = q->next;
//     }
//     p->next = NULL;
//     free(q);
//     return head;
// }

// struct Node *deleteFromIndex(struct Node *head, int index)
// {
//     int j = 0;
//     struct Node *p = head;
//     struct Node *q = head->next;
//     while (j < index - 1)
//     {
//         p = p->next;
//         q = q->next;
//         j++;
//     }
//     p->next = q->next;
//     free(q);
//     return head;
// }

struct Node *deleteElement(struct Node *head, int elem)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->data != elem && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data == elem)
    {
        p->next = q->next;
        free(q);
    }
    else
    {
        printf("Invalid element \n");
    }
    return head;
}

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d \n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *extra;

    // Allocate memory for nodes in the linked list in Heap.
    head = (struct Node *)malloc(sizeof(struct Node)); // These will allocate(create) a memory in heap and return the address of that memory.
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes.
    head->data = 4;
    head->next = second;

    // Link second and third nodes.
    second->data = 3;
    second->next = third;

    // Link third and fourth nodes.
    third->data = 2;
    third->next = fourth;

    // Terminate the list at the  fourth node.
    fourth->data = 1;
    fourth->next = NULL;

    linkedListTraversal(head);
    printf("\n");
    // head = deleteFromFirst(head);
    // head = deleteFromIndex(head, 1);
    head = deleteElement(head, 2);
    // head = deleteFromLast(head);
    linkedListTraversal(head);

    return 0;
}