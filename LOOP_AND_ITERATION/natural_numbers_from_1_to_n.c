#include<stdio.h>
int main(){
    int n,i;
    printf("Enter a no.:");
    scanf("%d",&n);
    printf("Natursl numbers from 1 to %d is:\n",n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",i);
    }
    return 0;
}