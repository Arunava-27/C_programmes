// program to implement breadth first search and depth first search in a binary search tree

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct node *insert(struct node *root, int data)
{
    if (root == NULL)
    {
        root = createNode(data);
    }
    else if (data <= root->data)
    {
        root->left = insert(root->left, data);
    }
    else
    {
        root->right = insert(root->right, data);
    }
    return root;
}

void bfs(struct node *root)
{
    struct node *queue[100];
    int front = 0, rear = 0;
    queue[rear++] = root;
    while (front != rear)
    {
        struct node *current = queue[front++];
        printf("%d ", current->data);
        if (current->left != NULL)
        {
            queue[rear++] = current->left;
        }
        if (current->right != NULL)
        {
            queue[rear++] = current->right;
        }
    }
}

void dfs(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    printf("%d ", root->data);
    dfs(root->left);
    dfs(root->right);
}

int main()
{
    struct node *root = NULL;
    root = insert(root, 10);
    root = insert(root, 5);
    root = insert(root, 15);
    root = insert(root, 3);
    root = insert(root, 7);
    root = insert(root, 12);
    root = insert(root, 18);
    printf("Breadth first search: ");
    bfs(root);
    printf("\n");
    printf("Depth first search: ");
    dfs(root);
    printf("\n");
    return 0;
}

// Output:

// Breadth first search: 10 5 15 3 7 12 18
// Depth first search: 10 5 3 7 15 12 18

