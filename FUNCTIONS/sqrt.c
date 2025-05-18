#include<stdio.h>
#include<math.h>
int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    int root = sqrt(a);
    printf("Square root of %d is = %d",a,root);
    return 0;
}