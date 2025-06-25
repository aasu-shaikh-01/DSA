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
    do
    {
        printf("Element: %d\n", temp->data);
        temp = temp->next;
    } while (temp != head);
}

int main()
{
    char ch;
    do
    {
        new = (struct Node *)malloc(sizeof(struct Node));
        int value;
        printf("Enter the value in node: ");
        scanf("%d", &value);

        new->data = value;
        new->next = head;

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

    return 0;
}

// | **Operation**              | **Singly Linked List** | **Doubly Linked List** | **Circular Linked List**           |
// |---------------------------|------------------------|-------------------------|------------------------------------|
// | Insert at Beginning       | O(1)                   | O(1)                    | O(1)                               |
// | Insert at End             | O(1) ✅                 | O(1)                    | O(1) ✅                             |
// | Insert at Position        | O(n)                   | O(n)                    | O(n)                               |
// | Delete from Beginning     | O(1)                   | O(1)                    | O(1)                               |
// | Delete from End           | O(n) ❗                | O(1) ✅                 | O(n) ❗                            |
// | Delete from Position      | O(n)                   | O(n)                    | O(n)                               |
// | Search                    | O(n)                   | O(n)                    | O(n)                               |
// | Traverse (Forward)        | O(n)                   | O(n)                    | O(n)                               |
// | Traverse (Backward)       | ❌ Not possible         | O(n)                    | O(n) (✅ if **doubly** circular)  |

// | **List Type**          | **Space Complexity** |
// |------------------------|----------------------|
// | **Singly Linked List** | O(n)                 |
// | **Doubly Linked List** | O(n)                 |
// | **Circular Linked List** | O(n)              |