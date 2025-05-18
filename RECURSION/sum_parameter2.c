#include<stdio.h>
int sum(int n){
    if(n==1 || n==0) return 1;
    int recANS = n + sum(n-1);
    return recANS;
}
int main(){
    int n;
    printf("Enter a no. : ");
    scanf("%d",&n);
    int summ = sum(n);
    printf("SUM OF %d NUMBER : %d",n,summ);
    return 0;
} 