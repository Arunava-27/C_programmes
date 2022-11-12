// Program to display all negative numbers on side and positive numbers on the other

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int num;
    struct node *next;
};

int create(struct node **);
void display(struct node *);
void release(struct node **);

int main()
{
    struct node *p = NULL;
    int count;

    printf("Enter data into the list (enter 0 to end)\n");
    count = create(&p);
    printf("The list is:\n");
    display(p);
    release (&p);

    return 0;
}

int create(struct node **q)
{
    int c = 0;
    struct node *temp, *rear;

    *q = (struct node *)malloc(sizeof(struct node));
    rear = *q;

    printf("Enter data: ");
    scanf("%d", &rear->num);

    while (rear->num != 0)
    {
        c++;
        temp = (struct node *)malloc(sizeof(struct node));
        rear->next = temp;
        rear = temp;
        printf("Enter data: ");
        scanf("%d", &rear->num);
    }
    rear->next = NULL;

    return c;
}

void display(struct node *q)
{
    struct node *temp;
    int neg = 0, pos = 0;

    temp = q;
    while (temp != NULL)
    {
        if (temp->num < 0)
        {
            neg++;
        }
        else
        {
            pos++;
        }
        temp = temp->next;
    }
    temp = q;
    while (neg != 0)
    {
        if (temp->num < 0)
        {
            printf("%d ", temp->num);
            neg--;
        }
        temp = temp->next;
    }
    temp = q;
    while (pos != 0)
    {
        if (temp->num >= 0)
        {
            printf("%d ", temp->num);
            pos--;
        }
        temp = temp->next;
    }
    printf("\n");
}

void release(struct node **q)
{
    struct node *temp;

    while (*q != NULL)
    {
        temp = *q;
        *q = (*q)->next;
        free(temp);
    }
}

// Output

// Enter data into the list (enter 0 to end)
// Enter data: 1
// Enter data: 2
// Enter data: -3
// Enter data: -4
// Enter data: 5
// Enter data: 6
// Enter data: 0
// The list is:
// -3 -4 1 2 5 6
