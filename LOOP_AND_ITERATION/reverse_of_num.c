#include<stdio.h>
int main(){
    int num,last_digit,rev_num = 0;
    printf("Enter a number : ");
    scanf("%d",&num);
    while(num != 0)
    {
        last_digit = num % 10;
        rev_num = rev_num * 10 + last_digit;
        num = num / 10;
    }
        printf("Reverse of the number is = %d",rev_num);
    return 0;
}