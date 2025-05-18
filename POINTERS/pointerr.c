#include<stdio.h>
int main(){
    int a = 25;
    int* b = &a;
    printf("%p\n",&a);
    printf("%p\n",b);
    printf("%p\n",&b);
    printf("%d",*b);
    return 0;
}