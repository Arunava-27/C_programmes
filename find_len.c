#include <stdio.h>

int main(){
    int arr[] = {1,2,3,4,5};

    int len = sizeof arr / sizeof arr[0];
    int len1 = sizeof arr / sizeof *arr;

    printf("%d, %d \n", len, len1);

    char ch;

    printf("Enter a character: \n");
    scanf("%c", &ch);
    printf("ASCII value of %c is %d.", ch, ch);

    return 0;
}