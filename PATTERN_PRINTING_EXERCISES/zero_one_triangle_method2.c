#include<stdio.h>
int main(){
    int m,i,j;
    printf("Enter no. of rows:");
    scanf("%d",&m);
    int a;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=i;j++)
        {
            if((i+j)%2==0)
            printf("1 ");
            else
            printf("0 ");
        }
            printf("\n");
    }
    return 0;
}