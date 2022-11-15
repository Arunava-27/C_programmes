// create AVL tree

// program to implement AVL tree

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    int height;
    struct node *left;
    struct node *right;
};

int max(int a, int b)
{
    return a > b ? a : b;
}

int height(struct node *root)
{
    if (root == NULL)
    {
        return -1;
    }
    return root->height;
}

int getBalance(struct node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return height(root->left) - height(root->right);
}

struct node *createNode(int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->height = 0;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct node *rightRotate(struct node *root)
{
    struct node *newRoot = root->left;
    struct node *temp = newRoot->right;
    newRoot->right = root;
    root->left = temp;
    root->height = max(height(root->left), height(root->right)) + 1;
    newRoot->height = max(height(newRoot->left), height(newRoot->right)) + 1;
    return newRoot;
}

struct node *leftRotate(struct node *root)
{
    struct node *newRoot = root->right;
    struct node *temp = newRoot->left;
    newRoot->left = root;
    root->right = temp;
    root->height = max(height(root->left), height(root->right)) + 1;
    newRoot->height = max(height(newRoot->left), height(newRoot->right)) + 1;
    return newRoot;
}

struct node *insert(struct node *root, int data)
{
    if (root == NULL)
    {
        root = createNode(data);
    }
    else if (data < root->data)
    {
        root->left = insert(root->left, data);
    }
    else
    {
        root->right = insert(root->right, data);
    }
    root->height = max(height(root->left), height(root->right)) + 1;
    int balance = getBalance(root);
    if (balance > 1 && data < root->left->data)
    {
        return rightRotate(root);
    }
    if (balance < -1 && data > root->right->data)
    {
        return leftRotate(root);
    }
    if (balance > 1 && data > root->left->data)
    {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }
    if (balance < -1 && data < root->right->data)
    {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }
    return root;
}

void inorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

int main()
{
    struct node *root = NULL;
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 30);
    root = insert(root, 40);
    root = insert(root, 50);
    root = insert(root, 5);
    inorder(root);
    return 0;
}

// Output

// 25 30 40 50 10 20
