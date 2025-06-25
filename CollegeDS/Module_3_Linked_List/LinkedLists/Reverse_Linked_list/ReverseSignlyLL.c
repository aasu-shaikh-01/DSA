#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *new, *head = NULL, *tail = NULL;

void traverse()
{
    struct Node *temp = head;
    printf("Your Elements Are: \n");
    while (temp != NULL)
    {
        printf("Element: %d\n", temp->data);
        temp = temp->next;
    }
}
void reverseList()
{
    struct Node *prev = NULL;
    struct Node *curr = head;
    struct Node *next = NULL;

    while (curr != NULL)
    {
        next = curr->next; // Save next node
        curr->next = prev; // Reverse current node's pointer
        prev = curr;       // Move prev to current
        curr = next;       // Move to next node
    }

    head = prev; // Update head to the new front
}

int main()
{
    head = NULL;
    tail = NULL;

    char ch;
    int value;

    do
    {
        new = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter the value in node: ");
        scanf("%d", &value);
        new->data = value;
        new->next = NULL;
        if (head == NULL)
        {
            head = new;
            tail = new;
        }
        else
        {
            tail->next = new;
            tail = new;
        }
        printf("c-continue & other for exit: ");
        scanf(" %c", &ch);
    } while (ch == 'c');
    traverse();
    reverseList();
    traverse();

    return 0;
}
