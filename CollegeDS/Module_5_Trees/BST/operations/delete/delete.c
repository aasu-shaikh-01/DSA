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

void inOrder(struct Node *rootNode)
{
    // InOrder would be in ascending order if it is a binary search tree:
    if (rootNode != NULL)
    {
        inOrder(rootNode->left);
        printf("%d ", rootNode->data);
        inOrder(rootNode->right);
    }
}

struct Node *inOrderPredecessor(struct Node *rootNode)
{
    rootNode = rootNode->left;
    while (rootNode->right != NULL)
    {
        rootNode = rootNode->right;
    }
    return rootNode;
}

struct Node *deleteNode(struct Node *rootNode, int value)
{
    struct Node *iPre;
    if (rootNode == NULL)
    {
        return NULL;
    }
    if (rootNode->left == NULL && rootNode->right == NULL)
    {
        free(rootNode);
        return NULL;
    }

    if (value < rootNode->data)
    {
        rootNode->left = deleteNode(rootNode->left, value);
    }
    else if (value > rootNode->data)
    {
        rootNode->right = deleteNode(rootNode->right, value);
    }
    else
    {
        iPre = inOrderPredecessor(rootNode);
        rootNode->data = iPre->data;
        rootNode->left = deleteNode(rootNode->left, iPre->data);
    }
    return rootNode;
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

    // delete(rootNode, 12);
    inOrder(rootNode);
    printf("\n");
    deleteNode(rootNode, 9);
    inOrder(rootNode);

    return 0;
}