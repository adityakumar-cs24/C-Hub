#include<stdio.h>
int main(){
    float celsius,fahrenheit;
    printf("Enter Temperature in Fahrenheit:");
    scanf("%f",&fahrenheit);
    celsius =(fahrenheit - 32)*5/9;
    printf("Temperature in celsius is : %.2f",celsius);
    return 0;
}