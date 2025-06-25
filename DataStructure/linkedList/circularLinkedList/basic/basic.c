#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next; // self referencing structure
};

void linkedListTraversal(struct Node *head)
{
    struct Node *p = head;
    do
    {
        printf("Element: %d \n", p->data);
        p = p->next;
    } while (p != head);

    // or:
    // while (p->next != head)
    // {
    //     printf("Element: %d \n", p->data);
    //     p = p->next;
    // }
    // printf("Element: %d \n", p->data);
}

// I couldn't do it
// struct Node *insertElement(struct Node *head, int index, int elem)
// {
//     struct Node *p = head;
//     struct Node *q = (struct Node *)malloc(sizeof(struct Node));
//     int j = 0;
//     while (j < index - 1)
//     {
//         p = p->next;
//     }
//     struct Node *l = p->next;
//     p->next = q;
//     q->next = l;
//     return head;
// }

struct Node *insertAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for nodes in the linked list in Heap.
    head = (struct Node *)malloc(sizeof(struct Node)); // These will allocate(create) a memory in heap and return the address of that memory.
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes.
    head->data = 7;
    head->next = second;

    // Link second and third nodes.
    second->data = 11;
    second->next = third;

    // Link third and fourth nodes.
    third->data = 66;
    third->next = fourth;

    // Terminate the list at the  fourth node.
    fourth->data = 70;
    fourth->next = head;

    linkedListTraversal(head);
    head = insertAtFirst(head, 202);
    // head = insertElement(head, 2, 2);
    linkedListTraversal(head);

    return 0;
}