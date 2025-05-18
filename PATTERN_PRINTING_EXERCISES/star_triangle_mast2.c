#include<stdio.h>
int main(){
    int m,i,j,k;
    printf("Enter no. of rows:");
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=m-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("*");
        }
            printf("\n");
    }
    return 0;
}