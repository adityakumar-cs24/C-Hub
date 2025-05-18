#include<stdio.h>
int main(){
    char ch;
    printf("Enter a  character:");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
    {
        printf("Lower case alphabet");
    }
    else if(ch>='A' && ch<='Z')
    {
        printf("Upper case alphabet");
    }
    else
    {
        printf("Character is not an alphabet");
    }
    return 0;
}