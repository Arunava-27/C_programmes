#include<stdio.h>

int main()
{
    int t;
    int g1[t],s1[t],b1[t];
    int g2[t],s2[t],b2[t];

    //testcase value
    scanf("%d", &t);

    //testcase run
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d %d %d %d", &g1[i], &s1[i], &b1[i], &g2[i], &s2[i], &b2[i]);
    }

    for (int i = 0; i < t; i++)
    {
        int sum1 = g1[i] + s1[i] + b1[i];
        int sum2 = g2[i] + s2[i] + b2[i];

        if (sum1 > sum2)
        {
            printf("\n1\n");
        }
        else
        printf("\n2");
        
    }
    
    
    return 0;
}