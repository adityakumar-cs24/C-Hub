#include<stdio.h>
int main(){
    int i,j,m;
    printf("Enter no. of rows:");
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=m;j++)
        {
            int a = m/2 + 1;
            if(j==a || i==a)
                printf("*");
            else
                printf(" ");
        }
            printf("\n");
    }
    return 0;
} 