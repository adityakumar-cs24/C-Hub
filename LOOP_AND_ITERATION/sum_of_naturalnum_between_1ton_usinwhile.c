#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Sum of natural numbers between 1 to %d is:",n);
    i=1;
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
        printf("%d",sum);
    return 0;
}