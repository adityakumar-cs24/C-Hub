#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Sum of natural numbers between 1 to %d is:",n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
        printf("%d",sum);
    return 0;
}