#include <stdio.h>
#include <stdlib.h>

// This is the program for creating binary tree and showing the element of that tree using recursion: 

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

// Traversing of binary tree:

// void preOrder(struct Node *rootNode)
// {
//     if (rootNode != NULL)
//     {
//         printf("%d ", rootNode->data);
//         preOrder(rootNode->left);
//         preOrder(rootNode->right);
//     }
// }

// void postOrder(struct Node *rootNode)
// {
//     if (rootNode != NULL)
//     {
//         postOrder(rootNode->left);
//         postOrder(rootNode->right);
//         printf("%d ", rootNode->data);
//     }
// }

void inOrder(struct Node *rootNode)
{
    if (rootNode != NULL)
    {
        inOrder(rootNode->left);
        printf("%d ", rootNode->data);
        inOrder(rootNode->right);
    }
}

int main()
{
    struct Node *rootNode = createNode(1);
    struct Node *newNode2 = createNode(2);
    struct Node *newNode3 = createNode(3);
    struct Node *newNode4 = createNode(4);
    struct Node *newNode5 = createNode(5);
    struct Node *newNode6 = createNode(6);

    rootNode->left = newNode2;
    rootNode->right = newNode3;

    newNode2->left = newNode4;
    newNode2->right = newNode5;

    newNode3->left = NULL;
    newNode3->right = newNode6;

    // printf("PreOrder Traversal: ");
    // preOrder(rootNode);

    // printf("PostOrder Traversal: ");
    // postOrder(rootNode);

    printf("InOrder Traversal: ");
    inOrder(rootNode);

    return 0;
}
