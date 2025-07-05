#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *createNode(int data)
{
    struct Node *new = (struct Node *)malloc(sizeof(struct Node));
    new->data = data;
    new->left = NULL;
    new->right = NULL;
    return new;
}

struct Node *search(struct Node *rootNode, int value)
{
    if (rootNode == NULL)
    {
        printf("%d is not present in this tree: ", value);
        return NULL;
    }
    else if (rootNode->data == value)
    {
        return rootNode;
    }
    else
    {
        if (rootNode->data > value)
        {
            search(rootNode->left, value);
        }
        else
        {
            search(rootNode->right, value);
        }
    }
}

// // Insertion recursively:
// void insert(struct Node *rootNode, struct Node *new)
// {
//     if (rootNode == NULL)//why this condition is here
//         return;
//     if (rootNode->data == new->data)
//     {
//         printf("this data is already exits in this tree:");
//         return;
//     }
//     if (new->data < rootNode->data)
//     {
//         if (rootNode->left == NULL)
//         {
//             rootNode->left = new;
//         }
//         else
//         {
//             insert(rootNode->left, new);
//         }
//     }
//     else
//     {
//         if (rootNode->right == NULL)
//         {
//             rootNode->right = new;
//         }
//         else
//         {
//             insert(rootNode->right, new);
//         }
//     }
// }

// Insertion Iteratively:
void insert(struct Node *rootNode, struct Node *new)
{
    struct Node *prev = NULL;
    while (rootNode != NULL)
    {
        prev = rootNode;
        if (rootNode->data == new->data)
        {
            printf("you can't insert %d because %d is already available in the tree\n", new->data, new->data);
            return;
        }
        if (rootNode->data > new->data)
        {
            rootNode = rootNode->left;
        }
        else
        {
            rootNode = rootNode->right;
        }
    }
    if (prev->data > new->data)
    {
        prev->left = new;
    }
    else
    {
        prev->right = new;
    }
}

int main()
{
    struct Node *rootNode = createNode(10);
    struct Node *newNode2 = createNode(8);
    struct Node *newNode3 = createNode(12);
    struct Node *newNode4 = createNode(4);
    struct Node *newNode5 = createNode(9);
    struct Node *newNode6 = createNode(14);

    rootNode->left = newNode2;
    rootNode->right = newNode3;

    newNode2->left = newNode4;
    newNode2->right = newNode5;

    newNode3->left = NULL;
    newNode3->right = newNode6;

    struct Node *new = createNode(90);
    // insert(rootNode, new);

    insertRecursively(rootNode, new);

    struct Node *result = search(rootNode, 90);
    printf("%d\n", result->data);

    return 0;
}