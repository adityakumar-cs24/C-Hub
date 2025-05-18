#include<stdio.h>
int main(){
    int n;
    printf("Enter n :");
    scanf("%d",&n);
    int nsp = n+1;
    for(int i=0;i<=n;i++)
    {
        for(int k=1;k<=nsp;k++)
        {
            printf(" ");
        }
        nsp = nsp - 1;
        int first = 1;
        for(int j=0;j<=i;j++)
        {
            printf("%d ",first);
            first = first * (i-j)/(j+1); 
        }
        printf("\n");
    }
}