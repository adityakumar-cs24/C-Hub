#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%[^\n]s",str);
    printf("%s",str);
    printf("\n%d",strlen(str));
    return 0;
}