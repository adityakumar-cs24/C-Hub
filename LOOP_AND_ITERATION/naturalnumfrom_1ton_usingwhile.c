#include<stdio.h>
int main(){
    int n,i=1;
    printf("Enter a no.:");
    scanf("%d",&n);
    printf("Natursl numbers from 1 to %d is:\n",n);
    while(i<=n)
    {
        printf("%d ",i);
        i++;
    }
    return 0;
}