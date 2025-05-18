#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
    temp = a;
    a = b;
    b = temp;
    printf("After swap a : %d\n",a);
    printf("Aftrer swap b : %d",b);
    return 0;
}