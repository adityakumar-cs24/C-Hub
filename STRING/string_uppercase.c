#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX_SIZE 100
int main(){
    char str[MAX_SIZE];
    scanf("%[^\n]s",str);
    toupper((unsigned char)str);
    printf("%s",str);
    return 0;
}