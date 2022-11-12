// program to implement linked list
#include <stdio.h>
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

int length()
{
    int length = 0;
    struct node *current;

    for (current = head; current != NULL; current = current->next)
    {
        length++;
    }

    return length;
}

// find a link with given key
struct node *find(int data)
{

    // start from the first link
    struct node *current = head;

    // if list is empty
    if (head == NULL)
    {
        return NULL;
    }

    // navigate through list
    while (current->data != data)
    {

        // if it is last node
        if (current->next == NULL)
        {
            return NULL;
        }
        else
        {
            // go to next link
            current = current->next;
        }
    }

    // if data found, return the current Link
    return current;
}

// delete a link with given key
struct node *delete (int data)
{

    // start from the first link
    struct node *current = head;
    struct node *previous = NULL;

    // if list is empty
    if (head == NULL)
    {
        return NULL;
    }

    // navigate through list
    while (current->data != data)
    {

        // if it is last node
        if (current->next == NULL)
        {
            return NULL;
        }
        else
        {
            // store reference to current link
            previous = current;
            // move to next link
            current = current->next;
        }
    }

    // found a match, update the link
    if (current == head)
    {
        // change first to point to next link
        head = head->next;
    }
    else
    {
        // bypass the current
        previous->next = current->next;
    }

    return current;
}

void sort()
{

    int i, j, k, tempData;
    struct node *current;
    struct node *next;

    int size = length();
    k = size;

    for (i = 0; i < size - 1; i++, k--)
    {
        current = head;
        next = head->next;

        for (j = 1; j < k; j++)
        {

            if (current->data > next->data)
            {
                tempData = current->data;
                current->data = next->data;
                next->data = tempData;
            }

            current = current->next;
            next = next->next;
        }
    }
}

void reverse(struct node **head_ref)
{
    struct node *prev = NULL;
    struct node *current = *head_ref;
    struct node *next;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head_ref = prev;
}

int main()
{
    insertFirst(10);
    insertFirst(20);
    insertFirst(30);
    insertFirst(1);
    insertFirst(40);
    insertFirst(56);

    printf("Original List: \n");

    // print list
    printList();

    while (!isEmpty())
    {
        struct node *temp = deleteFirst();
        printf("Deleted value:");
        printf("(%d)", temp->data);
    }

    printf("List after deleting all items: \n");
    printList();
    insertFirst(10);
    insertFirst(20);
    insertFirst(30);
    insertFirst(1);
    insertFirst(40);
    insertFirst(56);
    printf("List after Inserting again: ");
    printList();
   
    struct node *foundLink = find(4);

    if (foundLink != NULL)
    {
        printf("Element found: ");
        printf("(%d)\n", foundLink->data);
        printf("");
    }
    else
    {
        printf("Element not found.\n");
    }

    delete (4);
    printf("List after deleting an item: ");
    printList();
    
    sort();
    

    printf("List after sorting the data: ");
    printList();
    reverse(&head);
  
    printf("List after reversing the data: ");
    printList();
    
    return 0;
}
