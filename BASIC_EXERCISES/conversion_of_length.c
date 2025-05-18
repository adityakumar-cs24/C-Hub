#include<stdio.h>
int main(){
    float cm,meter,km;
    printf("Enter length in cm:");
    scanf("%f",&cm);
    meter = cm/100.0;
    km = cm/1000.0;
    printf("Length in meter is : %.2f",meter);
    printf("\nLength in kilometer is : %.2f",km);
    return 0;
}