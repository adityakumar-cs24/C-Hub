#include<stdio.h>
int max(int a, int b){
    return (a > b) ? a : b;
}
int min(int a, int b){
    return (a > b) ? a : b;
}
int main(){
    int a,b;
    printf("Enter 1st no. : ");
    scanf("%d",&b);
    printf("Enter 2nd no. : ");
    scanf("%d",&b);
    int x = max(a,b);
    int y = min(a,b);
    printf("Max = %d\n",x);
    printf("Min = %d",y);
    return 0;
}