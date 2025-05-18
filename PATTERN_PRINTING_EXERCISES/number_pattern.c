#include<stdio.h>
int main(){
    int m,n,i,j;
    printf("Enter no. of rows:");
    scanf("%d",&m);
    printf("Enter no. of columns:");
    scanf("%d",&n);
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
    {
        printf("%d ",j);
    }
        printf("\n");
    }
    return 0;
}