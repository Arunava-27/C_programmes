// program for Insertion and deletion in specific positions in array.

#include <stdio.h>

int main()
{
    int arr[100],i,n,pos,ele;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the elements of array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the position where you want to insert the element: ");
    scanf("%d",&pos);
    printf("Enter the element you want to insert: ");
    scanf("%d",&ele);
    for(i=n-1;i>=pos-1;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos-1]=ele;
    n=n+1;
    printf("Array after insertion: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nEnter the position where you want to delete the element: ");
    scanf("%d",&pos);
    for(i=pos-1;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    n=n-1;
    printf("Array after deletion: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}