#include <stdio.h>

int main()
{
    int i,age;

    for  (i = 0; i < 10; i++)
    {
        printf("%d\n", i);
        scanf("%d", &age);
        if (age > 10)
        {
            continue;
        }
        printf("No continue Statement came across");
        
    }
    return 0;
}
