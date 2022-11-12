// linear search program in C

// C program for implementation of linear search

#include <stdio.h>

// A function to implement linear search
int linearSearch(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}

// A utility function to print an array of size n
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");

}

// driver program to test above functions
int main()
{
    int arr[] = {2, 3, 4, 10, 40};
    int x = 10;
    int n = sizeof(arr)/ sizeof(arr[0]);
    int result = linearSearch(arr, n, x);
    (result == -1)? printf("Element is not present in array")
                  : printf("Element is present at index %d", result);
    return 0;
}

// Output:

// Element is present at index 3
