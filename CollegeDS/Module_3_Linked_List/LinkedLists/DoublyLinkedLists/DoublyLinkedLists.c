#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
} *new, *head = NULL, *tail = NULL;

void ForwardTraversing();
void ReverseTraversing();
void insertAtBeguning();
void insertAtEnd();
void insertAtGivenPos();
void deleteFromBeguning();
void deleteFromEnd();
void deleteFromGivenPos();

int main()
{
    char choice;
    do
    {
        int value;
        new = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter the data: ");
        scanf("%d", &value);

        new->data = value;
        new->next = NULL;

        if (head == NULL)
        {
            new->prev = NULL;
            head = new;
            tail = new;
        }
        else
        {
            tail->next = new;
            new->prev = tail;
            tail = new;
        }
        printf("c-continue, other key to exit: ");
        scanf(" %c", &choice);
    } while (choice == 'c');

    int choose;
    do
    {
        printf("-----------LL ops------------\n");
        printf("1. Insert At Beguning\n");
        printf("2. Insert At End\n");
        printf("3. Insert At Given Position\n");
        printf("4. Delete From Beguning\n");
        printf("5. Delete From End\n");
        printf("6. Delete From Given Position\n");
        printf("7. Forward Traversing\n");
        printf("8. Reverse Traversing\n");
        printf("9. Exit\n");

        scanf("%d", &choose);

        switch (choose)
        {
        case 1:
            insertAtBeguning();
            break;
        case 2:
            insertAtEnd();
            break;
        case 3:
            insertAtGivenPos();
            break;
        case 4:
            deleteFromBeguning();
            break;
        case 5:
            deleteFromEnd();
            break;
        case 6:
            deleteFromGivenPos();
            break;
        case 7:
            ForwardTraversing();
            break;
        case 8:
            ReverseTraversing();
            break;
        default:
            break;
        }
    } while (choose != 9);
}

void ForwardTraversing()
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}
void ReverseTraversing()
{
    struct Node *temp = tail;
    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->prev;
    }
}

void insertAtBeguning()
{
    int value;
    new = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the data: ");
    scanf("%d", &value);

    new->data = value;
    new->prev = NULL;

    new->next = head;
    head->prev = new;
    head = new;
}
void insertAtEnd()
{
    int value;
    new = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the data: ");
    scanf("%d", &value);

    new->data = value;
    new->next = NULL;

    tail->next = new;
    new->prev = tail;
    tail = new;
}
void insertAtGivenPos()
{
    int value;
    int pos;
    new = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the data: ");
    scanf("%d", &value);
    new->data = value;

    printf("Enter the position: ");
    scanf("%d", &pos);

    struct Node *temp = head;
    for (int i = 1; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    new->next = temp->next;
    temp->next->prev = new;
    temp->next = new;
    new->prev = temp;
}

void deleteFromBeguning()
{
    struct Node *temp = head;
    head = head->next;
    head->prev = NULL;
    free(temp);
}
void deleteFromEnd()
{
    struct Node *temp = tail;
    tail = tail->prev;
    tail->next = NULL;
    free(temp);
}
void deleteFromGivenPos()
{
    int posi;
    printf("Enter the position: ");
    scanf("%d", &posi);

    struct Node *temp = head;
    for (int i = 0; i < posi - 1; i++)
    {
        temp = temp->next;
    }
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    free(temp);
}