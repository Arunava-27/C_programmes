// MasterList(insertion deletion printing a singly link list)

// C program to implement basic list operations
// like insertion, deletion and printing

#include <stdio.h>
#include <stdlib.h>

// A linked list node
struct Node
{
    int data;
    struct Node *next;
};

// Function to insert a node at the beginning of a linked list
void push(struct Node **head_ref, int new_data)
{
    // allocate node
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

    // put in the data
    new_node->data = new_data;

    // link the old list off the new node
    new_node->next = (*head_ref);

    // move the head to point to the new node
    (*head_ref) = new_node;
}

// Function to delete a node in a linked list

void deleteNode(struct Node **head_ref, int key)
{
    // Store head node
    struct Node *temp = *head_ref, *prev;

    // If head node itself holds the key to be deleted
    if (temp != NULL && temp->data == key)
    {
        *head_ref = temp->next; // Changed head
        free(temp);             // free old head
        return;
    }

    // Search for the key to be deleted, keep track of the
    // previous node as we need to change 'prev->next'
    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }

    // If key was not present in linked list
    if (temp == NULL)
        return;

    // Unlink the node from linked list
    prev->next = temp->next;

    free(temp); // Free memory
}

// Function to print nodes in a given linked list
void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf(" %d ", node->data);
        node = node->next;
    }
    printf("\n");
}

// Driver program to test above functions
int main()
{
    /* Start with the empty list */
    struct Node *head = NULL;

   // options for using the program

    int option;
    int data;
    int key;

    do{
        printf("\nselect an option\n");
        printf("1. insert a node at the beginning of a linked list\n");
        printf("2. delete a node in a linked list\n");
        printf("3. print nodes in a given linked list\n");
        printf("4. exit\n\n");
        printf("option : ");

        scanf("%d", &option);

        switch (option)
        {
        case 1:
            printf("\nenter the data to be inserted : ");
            scanf("%d", &data);
            push(&head, data);
            break;

        case 2:
            printf("\nenter the key to be deleted : ");
            scanf("%d", &key);
            deleteNode(&head, key);
            break;

        case 3:
            printList(head);
            break;

        case 4:
            exit(0);
            break;

        default:        
            printf("invalid option");
            break;
        }   

    } while (option != 4);

    return 0;
}