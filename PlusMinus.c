#include<stdio.h>
#include<math.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int a=0, b=0, c=0;    

    for (int i = 0; i < n-1; i++)
    {
        scanf("%d ",&arr[i]);
    }
    

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            a += 1;
        }
        else if (arr[i] < 0)
        {
            b += 1;
        }
        else{
            c += 1;
        }       
        
    }
    printf("------------------------------------------------------------\n");
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);

    float pos = a/n;
    float neg = b/n;
    float zero = c/n;
    printf("-----------------------------------------------------------\n");
     printf("%f\n",pos);
     printf("%f\n",neg);
     printf("%f\n",zero);

    // 6 digits after the decimal point
    pos = (1000000*pos)/1000000;
    neg = (1000000*neg)/1000000;
    zero = (1000000*zero)/1000000;
    printf("-----------------------------------------------------------\n");
    printf("%f\n",pos);
    printf("%f\n",neg);
    printf("%f\n",zero);
    

    return 0;
}