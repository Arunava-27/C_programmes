#include<stdio.h>
#define MAX_LIMIT 200;
int main(){
    char ch;
    char s[30];
    char sen[MAX_LIMIT]; 
    scanf("%c",&ch);
    scanf("%s",s);
    scanf(" %[^\n]%*c", sen); //* SENTENCE INPUT
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s",sen);
    return 0;
}