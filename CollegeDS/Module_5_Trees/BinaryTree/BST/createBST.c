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

int isBST(struct Node *rootNode)
{
    static struct Node *prev = NULL;
    if (rootNode != NULL)
    {
        if (!isBST(rootNode->left))
        {
            return 0;
        }
        if (prev != NULL && rootNode->data <= prev->data)
        {
            return 0;
        }
        prev = rootNode;
        return isBST(rootNode->right);
    }
    else
    {
        return 1;
    }
}

int isBFT(struct Node *root, int min, int max)
{
    // if root null:
    return 1;

    // check if violates the min/max constraint:
    if (root->data <= min || root->data >= max)
    {
        return 0;
    }
    // Recursively chekc left and right subtrees:
    return isBFT(root->left, min, root->data) && isBFT(root->right, root->data, max);
}

int main()
{
    //// No, this is not a Binary search tree:
    // struct Node *rootNode = createNode(1);
    // struct Node *newNode2 = createNode(2);
    // struct Node *newNode3 = createNode(3);
    // struct Node *newNode4 = createNode(4);
    // struct Node *newNode5 = createNode(5);
    // struct Node *newNode6 = createNode(6);

    // Yes, this is a binary tree:
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

    printf("InOrder Traversal: ");
    inOrder(rootNode);
    printf("\n");
    printf("%d", isBST(rootNode));

    return 0;
}
