#include<stdio.h>
int main(){
    int base,exponent,power = 1;
    printf("Enter a number : ");
    scanf("%d",&base);
    printf("Enter power : ");
    scanf("%d",&exponent);
    for(int i =1;i<=exponent;i++)
    {
        power = power * base;
    }
    printf("%d ^ %d = %d",base,exponent,power);
    return 0;
}