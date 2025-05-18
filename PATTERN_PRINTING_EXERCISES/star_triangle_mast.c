#include<stdio.h>
int main(){
    int m,i,j;
    printf("Enter no. of rows:");
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(i+j<=5)
            printf(" ");
            else
            printf("*");
        }
            printf("\n");
    }
    return 0;
}