#include<stdio.h>
int main(){
    int n,i;
    printf("Enter a no.:");
    scanf("%d",&n);
    printf("Natursl numbers from %d to 1 is:\n",n);
    i = n;
    while(i>=1)
    {
        printf("%d ",i);
        i--;
    }
    return 0;
}