#include <stdio.h>

int main()
{
    int i,age;

    for  (i = 0; i < 10; i++)
    {
        printf("%d\n", i);
        scanf("%d", &age);
        /*BREAK STATEMENT*/
        if (age > 10)
        {
            printf("Bero Haramjada");
            // break statement only takes u out of current loop
            //if under nested loop it takes u out of only one loop
            // break :: statement is used in loops and switch case statement
            break;
        }
        
    }
    /*Continue :: Statement Skips some code inside the loop and continues with the next iteration*/
    /*It is mainly used for condition so that we can skip some lines code under particular condition*/
    return 0;
}
