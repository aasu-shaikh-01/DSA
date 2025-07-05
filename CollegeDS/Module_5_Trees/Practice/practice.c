#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
} *new;

struct Node *createNode(int value)
{
    new = (struct Node *)malloc(sizeof(struct Node));
    new->data = value;
    new->left = NULL;
    new->right = NULL;
    return new;
}

void inOrder(struct Node *rootNode)
{
    if (rootNode != NULL)
    {
        inOrder(rootNode->left);
        printf("%d", rootNode->data);
        inOrder(rootNode->right);
    }
}

void preOrder(struct Node *rootNode)
{
    if (rootNode != NULL)
    {
        printf("%d", rootNode->data);
        preOrder(rootNode->left);
        preOrder(rootNode->right);
    }
}

void postOrder(struct Node *rootNode)
{
    if (rootNode != NULL)
    {
        postOrder(rootNode->left);
        postOrder(rootNode->right);
        printf("%d", rootNode->data);
    }
}

int main()
{
    struct Node *rootNode = createNode(1);
    rootNode->left = createNode(2);
    rootNode->right = createNode(3);
    rootNode->left->left = createNode(4);
    rootNode->left->right = createNode(5);
    rootNode->right->right = createNode(6);

    // inOrder(rootNode);
    // preOrder(rootNode);
    postOrder(rootNode);

    return 0;
}