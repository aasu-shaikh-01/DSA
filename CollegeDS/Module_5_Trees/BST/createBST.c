#include <stdio.h>
#include <stdlib.h>
// 1. Create Binary Search Tree:
// 2. Check if a tree is a binary tree or not:

// There are two codes to check a binary tree if it is a binary search tree or not: You just can try any one of them which one do you understand you can learn but both of them is little hard so plz dont be panic just keep going..,

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

// // or:
// #include <stdio.h>
// #include <stdlib.h>
// #include <limits.h>

// struct Node
// {
//     int data;
//     struct Node *left, *right;
// };

// struct Node *newNode(int data)
// {
//     struct Node *node = (struct Node *)malloc(sizeof(struct Node));
//     node->data = data;
//     node->left = node->right = NULL;
//     return node;
// }

// int isBST(struct Node *root, int min, int max)
// {
//     if (root == NULL)
//         return 1;

//     if (root->data <= min || root->data >= max)
//         return 0;

//     return isBST(root->left, min, root->data) &&
//            isBST(root->right, root->data, max);
// }

// int main()
// {
//     struct Node *root = newNode(10);
//     root->left = newNode(5);
//     root->right = newNode(20);
//     root->left->left = newNode(1);
//     root->left->right = newNode(8);

//     if (isBST(root, INT_MIN, INT_MAX))
//         printf("It is a Binary Search Tree.\n");
//     else
//         printf("It is NOT a Binary Search Tree.\n");

//     return 0;
// }
