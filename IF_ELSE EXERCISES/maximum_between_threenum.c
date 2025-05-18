#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter first no. :");
    scanf("%d",&a);
    printf("Enter second no. :");
    scanf("%d",&b);
    printf("Enter third no. :");
    scanf("%d",&c);
    if(a>b && a>c)
    {
        printf("%d is greater",a);
    }
    else if(b>a && b>c)
    {
        printf("%d is greater",b);
    }
    else
    {
        printf("%d is greater",c);
    }
    return 0;
}