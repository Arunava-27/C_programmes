// C program to perform union operation on two arrays

#include <stdio.h>

int main()
{
    int a[100], b[100], c[100], i, j, k, n1, n2, n3;

    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    printf("Enter the elements of the first array: ");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);
    printf("Enter the elements of the second array: ");
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }
    for (i = 0; i < n1; i++)
    {
        c[i] = a[i];
    }
    n3 = n1;
    for (i = 0; i < n2; i++)
    {
        for (j = 0; j < n1; j++)
        {
            if (b[i] == a[j])
            {
                break;
            }
        }
        if (j == n1)
        {
            c[n3] = b[i];
            n3++;
        }
    }
    printf("The union of the two arrays is: ");
    for (i = 0; i < n3; i++)
    {
        printf("%d ", c[i]);
    }
    printf("\n");

    return 0;
}

// Output:

// Enter the number of elements in the first array: 5
// Enter the elements of the first array: 1 2 3 4 5
// Enter the number of elements in the second array: 5
// Enter the elements of the second array: 4 5 6 7 8
// The union of the two arrays is: 1 2 3 4 5 6 7 8
