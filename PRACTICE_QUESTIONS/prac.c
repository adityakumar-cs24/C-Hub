#include<stdio.h>
int main(){
    int C,K,N;
    scanf("%d %d %d",&C,&K,&N);
    int temp = K;
    C = C*temp;
    K = C*temp;
    N = K*temp;
    printf("%d",N);
    return 0;
}