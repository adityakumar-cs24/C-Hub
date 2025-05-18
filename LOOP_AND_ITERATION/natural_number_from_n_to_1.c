#include<stdio.h>
int main(){
    int n,i;
    printf("Enter a no.:");
    scanf("%d",&n);
    printf("Natural numbers from %d to 1 is:\n",n);
    for(i=n;i>=1;i--)
    {
        printf("%d ",i);
    }
    return 0;
}