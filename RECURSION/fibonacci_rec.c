#include<stdio.h>
int fibo(int n){
    if(n<=2) return 1;
    int recANS = fibo(n-1) + fibo(n-2);
    return recANS;
}
int main(){
    int n,a,b,c;
    printf("Enter a number : ");
    scanf("%d",&n);
    int x = fibo(n);
    printf("%d",x);
    return 0;
}