// implement a doubly linked list

// Path: data-structures\linked-list.c
// Compare this snippet from data-structures\simple-(singly)link-list.c:
// // program to implement linked list
// #include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;

// display the list

void printList()
{
    struct node *ptr = head;
    printf("[head] =>");
    // start from the beginning
    while (ptr != NULL)
    {
        printf(" %d =>", ptr->data);
        ptr = ptr->next;
    }

    printf("[null]");
}

// insert link at the first location

void insertFirst(int data)
{
    // create a link
    struct node *link = (struct node *)malloc(sizeof(struct node));

    link->data = data;
    link->next = head;

    head = link;
}

// delete first item

struct node *deleteFirst()
{

    // save reference to first link
    struct node *tempLink = head;

    // mark next to first link as first
    head = head->next;

    // return the deleted link
    return tempLink;
}

// is list empty

int isEmpty()
{
    return head == NULL;
}

