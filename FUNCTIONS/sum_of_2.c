#include<stdio.h>
int add(int a, int b)
{
    return a+b;
}
int main(){
    int a,b;
    printf("Enter 1st no. :");
    scanf("%d",&a);
    printf("Enter 2nd no. :");
    scanf("%d",&b);
    int sum = add(a,b);
    printf("Sum of two no. is = %d",sum);
    return 0;
}