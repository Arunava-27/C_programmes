#include <stdio.h>

int main()
{
    int t;
    int a[t], b[t];   

    //Test Case value input.
    scanf("%d", &t);

    //Taking input for int a & b t times.
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &a[i],&b[i]);
    }

    //Summation & output.
    for (int i = 0; i < t; i++)
    {
        int s = a[i] + b[i];
        printf("%d\n", s);

    }   
    
    return 0;
    
}