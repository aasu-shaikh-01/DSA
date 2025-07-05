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

// Recursively:
struct Node *search(struct Node *rootNode, int key)
{
    if (rootNode == NULL)
    {
        return NULL;
    }
    else if (key == rootNode->data)
    {
        return rootNode;
    }
    else
    {
        if (key < rootNode->data)
        {
            search(rootNode->left, key);
        }
        else
        {
            search(rootNode->right, key);
        }
    }
}

// Iteratively:
struct Node *searchIter(struct Node *rootNode, int key)
{
    while (rootNode != NULL)
    {
        if (key == rootNode->data)
        {
            return rootNode;
        }
        else
        {
            if (rootNode->data > key)
            {
                rootNode = rootNode->left;
            }
            else
            {
                rootNode = rootNode->right;
            }
        }
    }
    return NULL;
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

    struct Node *result = search(rootNode, 8);
    if (result != NULL)
    {
        printf("%d\n", result->data);
    }
    else
    {
        printf("Key not found");
    }

    struct Node *res = searchIter(rootNode, 3);
    if (res != NULL)
    {
        printf("%d\n", res->data);
    }
    else
    {
        printf("Key not found");
    }

    return 0;
}