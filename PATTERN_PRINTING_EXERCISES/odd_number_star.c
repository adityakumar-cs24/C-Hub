#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter no. of rows:");
    scanf("%d",&n);
    int nst=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=nst;j++)
        {
        printf("* ");
        }
        nst = nst+2;
        printf("\n");
    }
    return 0;
}