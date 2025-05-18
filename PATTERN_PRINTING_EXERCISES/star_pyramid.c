#include<stdio.h>
int main(){
    int n,i,j,k;
    printf("Enter no. of rows:");
    scanf("%d",&n);
    int nst=1;
    int nsp=3;
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=nsp;k++)
        {
            printf(" ");
        }
        nsp = nsp-1;
        for(j=1;j<=nst;j++)
        {
        printf("*");
        }
        nst = nst+2;
        printf("\n");
    }
    return 0;
}