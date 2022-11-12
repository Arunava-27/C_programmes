// create a binary tree

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

void print_inorder(struct node *node) {
    if (node == NULL) {
        return;
    }
    print_inorder(node->left);
    printf("%d ", node->data);
    print_inorder(node->right);
}

void print_preorder(struct node *node) {
    if (node == NULL) {
        return;
    }
    printf("%d ", node->data);
    print_preorder(node->left);
    print_preorder(node->right);
}

void print_postorder(struct node *node) {
    if (node == NULL) {
        return;
    }
    print_postorder(node->left);
    print_postorder(node->right);
    printf("%d ", node->data);
}

int main() {
    insert(10);
    insert(5);
    insert(15);
    insert(3);
    insert(7);
    insert(12);
    insert(17);

    printf("Inorder: ");
    print_inorder(root);
    printf("\n");
    
        printf("Preorder: ");
        print_preorder(root);
        printf("\n");

        printf("Postorder: ");
        print_postorder(root);
        printf("\n");
    
        return 0;
    }
