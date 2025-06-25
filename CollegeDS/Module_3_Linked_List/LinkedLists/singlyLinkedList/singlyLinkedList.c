#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *new, *head, *tail;

void traverse(struct Node *ptr)
{
    printf("Your Elements Are: \n");
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

void insertAtBeguning()
{
    int value;
    new = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the value: ");
    scanf("%d", &value);
    new->data = value;
    new->next = head;
    head = new;
}
void insertAtEnd()
{
    int value;
    printf("Enter the value: ");
    scanf("%d", &value);
    new = (struct Node *)malloc(sizeof(struct Node));
    new->data = value;
    new->next = NULL;
    tail->next = new;
    tail = new;
}
void insertAtGivenPos()
{
    int value, pos;
    struct Node *temp;
    temp = head;

    printf("Enter the Position: ");
    scanf("%d", &pos);

    printf("Enter the value: ");
    scanf("%d", &value);

    new = (struct Node *)malloc(sizeof(struct Node));
    new->data = value;
    for (int i = 1; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    struct Node *NodeAfterThePos = temp->next;
    temp->next = new;
    new->next = NodeAfterThePos;
}

struct Node *deleteFromFirst()
{
    // head = head->next;
    struct Node *temp = head;
    head = head->next;
    return temp;
    free(temp);
}
struct Node *deleteFromEnd()
{

    struct Node *temp = head;
    struct Node *deletedElement;
    while (temp->next != tail)
    {
        temp = temp->next;
    }
    deletedElement = temp->next;
    tail = temp;
    tail->next = NULL;

    return deletedElement;
    free(deletedElement);
}
struct Node *deleteFromGivenPos()
{
    char pos;
    printf("Enter the position: ");
    scanf("%d", &pos);

    struct Node *temp = head;
    struct Node *temp1;
    for (int i = 1; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    temp1 = temp->next;
    temp->next = temp->next->next;

    return temp1;
    free(temp1);
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

    traverse(head);
    // Program for inserting the element  at the begening of the linkedlists.
    printf("Do you want to insert an element at the beguning? Y for yes or any other key for exit: ");
    char insertAtFirst;
    scanf(" %c", &insertAtFirst);

    if (insertAtFirst == 'Y')
    {
        insertAtBeguning();
        traverse(head);
    }
    // This is the program for inserting the element the end of the linkedlists.
    printf("Do you want to insert an element at the End? Y for yes or any other key for exit: ");
    char insertAtLast;
    scanf(" %c", &insertAtLast);
    if (insertAtLast == 'Y')
    {
        insertAtEnd();
        traverse(head);
    }
    //   This is the program for inserting the element at the specific position in the linkedlist.
    printf("Do you want to insert an element at the Specific Position? Y for yes or any other key for exit: ");
    char insertAtPos;
    scanf(" %c", &insertAtPos);
    if (insertAtPos == 'Y')
    {
        insertAtGivenPos();
        traverse(head);
    }

    printf("Do you want to delete an element from first? Y for yes or any other key for exit: ");
    char deleteFirstNode;
    scanf(" %c", &deleteFirstNode);
    if (deleteFirstNode == 'Y')
    {
        struct Node *deletedElement = deleteFromFirst();
        printf("deleted element is: %d\n", deletedElement->data);
        traverse(head);
    }

    printf("Do you want to delete an element from End? Y for yes or any other key for exit: ");
    char deleteLastNode;
    scanf(" %c", &deleteLastNode);
    if (deleteLastNode == 'Y')
    {
        struct Node *deletedElement = deleteFromEnd();
        printf("deleted element is: %d\n", deletedElement->data);
        traverse(head);
    }

    printf("Do you want to delete an element from a specific position? Y for yes or any other key for exit: ");
    char deletePosNode;
    scanf(" %c", &deletePosNode);
    if (deletePosNode == 'Y')
    {
        struct Node *deletedElement = deleteFromGivenPos();
        printf("deleted element is: %d\n", deletedElement->data);
        traverse(head);
    }

    return 0;
}