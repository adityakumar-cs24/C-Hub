#include<stdio.h>
int main(){
    int n,i,j,k;
    printf("Enter no. of rows:");
    scanf("%d",&n);
    int nch=1;
    int nsp=n-1;
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=nsp;k++)
        {
            printf(" ");
        }
        nsp = nsp-1;
        int a = 1;
        for(j=1;j<=nch;j++)
        {
            int d = a+64;
            char ch = (char)d;
            printf("%c",ch);
            a++;
        }
        nch = nch+2;
        printf("\n");
    }
    return 0;
}