#include<stdio.h>
#include<math.h>


int main(){
    int n;
    scanf("%d ",&n);

    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
    int leftDiagonal = 0;
    int rightDiagonal = 0;
    int res;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == i)
            {
                leftDiagonal += arr[i][j];
            }
                    
        }
        for (int k = n-1; k >= 0; k--)
        {
            if(k == n-(i+1)){
                rightDiagonal += arr[i][k];
            }           
        }        
    }

    int diff = leftDiagonal - rightDiagonal;
    res = abs(diff);
    printf("%d\n",leftDiagonal);
    printf("%d\n",rightDiagonal);
    printf("%d",res);
        
    
    return 0;
}