#include <stdio.h>

int main()
{
    int x;
    float y;

    //taking user input of withdrawing amount & initial balance

    scanf("%d %f", &x, &y);

    if (x%5 == 0 && (float)(x)<y)
    {
        float a = y - (float)(x) - 0.5;
        printf("%.2f", a);
    }
    else
    {
        printf("%.2f", y);
    }
    
    return 0;
}

