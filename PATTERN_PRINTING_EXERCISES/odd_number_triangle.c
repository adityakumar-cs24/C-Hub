#include<stdio.h>
int main(){
    int m,i,j;
    printf("Enter no. of rows:");
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        int a =1;
        for(j=1;j<=i;j++)   
    {
        printf("%d ",a);
        a = a+2;
    }
        printf("\n");
    }
    return 0;
}