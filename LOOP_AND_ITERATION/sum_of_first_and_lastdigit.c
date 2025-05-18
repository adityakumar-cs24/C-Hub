#include<stdio.h>
int main(){
    int num,first_digit,last_digit,sum;
    printf("Enter a number : ");
    scanf("%d",&num);
    last_digit = num % 10;
    while(num >= 10)
    {
        num = num / 10;
    }
    first_digit = num;
    sum = first_digit + last_digit;
    printf("First digit is %d\n",first_digit);
    printf("Last digit is %d\n",last_digit);
    printf("Sum of first and last digit is : %d",sum);
    return 0;
}