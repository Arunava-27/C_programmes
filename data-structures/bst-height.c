// Create a binary tree

#include <stdio.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *root = NULL;

void insert(int data) {
    struct node *new_node = (struct node *) malloc (sizeof(struct node));
    new_node->data = data;
    new_node->left = NULL;
    new_node->right = NULL;

    if (root == NULL) {
        root = new_node;
    } else {
        struct node *current = root;
        struct node *parent = NULL;

        while (1) {
            parent = current;
            if (data < parent->data) {
                current = current->left;
                if (current == NULL) {
                    parent->left = new_node;
                    return;
                }
            } else {
                current = current->right;
                if (current == NULL) {
                    parent->right = new_node;
                    return;
                }
            }
        }
    }
}

// find the height of a binary tree

int height(struct node *node) {
    if (node == NULL) {
        return 0;
    } else {
        int left_height = height(node->left);
        int right_height = height(node->right);

        if (left_height > right_height) {
            return left_height + 1;
        } else {
            return right_height + 1;
        }
    }
}

// driver program to test the above functions

int main() {
    insert(10);
    insert(5);
    insert(15);
    insert(3);
    insert(7);
    insert(12);
    insert(18);
    insert(2);
    insert(4);
    insert(6);
    insert(8);
    insert(11);
    insert(13);
    insert(16);

    printf("Height of the tree: %d", height(root));

    return 0;
}

