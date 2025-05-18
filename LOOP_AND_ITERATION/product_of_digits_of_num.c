#include<stdio.h>
int main(){
    int num,last_digit,sum = 1;
    printf("Enter a number : ");
    scanf("%d",&num);
    while(num != 0)
    {
        last_digit = num % 10;
        sum = sum * last_digit;
        num = num / 10;
    }
        printf("Product of digits of number is = %d",sum);
    return 0;
}