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

    return 0;
}
