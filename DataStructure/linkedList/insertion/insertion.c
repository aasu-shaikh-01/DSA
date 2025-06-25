#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next; // self referencing structure
};

// Function for insert the element at first of the linkedlist.
// struct Node *addElementAtFirst(struct Node *head, int elem)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     ptr->next = head;
//     ptr->data = elem;
//     return ptr;
// }

// // Function for insert the element at the end of the linkedlist.
// struct Node *addElementAtEnd(struct Node *head, int elem)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     ptr->data = elem;
//     struct Node *p = head;
//     while (p->next != NULL)
//     {
//         p = p->next;
//     }
//     p->next = ptr;
//     ptr->next = NULL;
//     return head;
// }

// Function for insert the element in between of the linkedlist.
// struct Node *addElementAtIndex(struct Node *head, int elem, int index)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     struct Node *p = head;
//     int i = 0;
//     while (i != index - 1)
//     {
//         p = p->next;
//         i++;
//     }
//     ptr->data = elem;
//     ptr->next = p->next;
//     p->next = ptr;
//     return head;
// }

// Function for insert the element after a node.
struct Node *addElementAfterNode(struct Node *head, struct Node *prevNode, int elem)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = elem;
    // struct Node *p = head;
    ptr->next = prevNode->next;
    prevNode->next = ptr;
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
    fourth->next = NULL;

    // linkedListTraversal(head);
    // head = addElementAtFirst(head, 19);
    // head = addElementAtEnd(head, 88);
    head = addElementAfterNode(head, third, 808);
    linkedListTraversal(head);

    return 0;
}