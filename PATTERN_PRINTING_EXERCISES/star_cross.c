#include<stdio.h>
int main(){
    int i,j,m;
    printf("Enter no. of rows:");
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(i==j || i+j==6)
                printf("*");
            else
                printf(" ");
        }
            printf("\n");
    }
    return 0;
}