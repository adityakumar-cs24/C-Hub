#include<stdio.h>
int main(){
    int num,first_digit,last_digit,temp_num;
    printf("Enter a number : ");
    scanf("%d",&num);
    last_digit = num % 10;
    while(num >= 10)
    {
        num = num / 10;
    }
    first_digit = num;
    printf("First digit is %d\n",first_digit);
    printf("Last digit is %d\n",last_digit);
    temp_num = first_digit;
    first_digit = last_digit;
    last_digit = temp_num;
    printf("After swapping first digit : %d\n",first_digit);
    printf("After swapping last digit : %d\n",last_digit);
    return 0;
}