#include<stdio.h>
#include<math.h>

int main(){
    int binary;
    int decimal = 0, weight = 0;

    scanf("%d",&binary);

    while (binary != 0)
    {
        int temp = binary%10;
        decimal += pow(2, weight)*temp;
        weight += 1;
        binary = binary/10;
    }
    
    printf("%d", decimal);

    return 0;
}