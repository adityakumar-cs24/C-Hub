#include<stdio.h>
int main(){
    char ch;
    printf("Alphabets from a to z are:\n");
    ch='a';
    while(ch<='z')
    {
        printf("%c ",ch);
        ch++;
    }
    return 0;
}