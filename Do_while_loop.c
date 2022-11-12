// Basic syntax of do_while loop 
// do_while loop executes atleast one time wheater it satisfy the condition or not
/* do
    {
        /* code */
 //   } while (/* condition */);

#include <stdio.h>

int main()
{
    int i = 0;

    do
    {
        i = i + 1;
        printf("%d\n", i);
    } while (i<10);
    
    return 0;
}
