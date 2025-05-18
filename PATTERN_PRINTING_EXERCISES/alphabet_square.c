#include<stdio.h>
int main(){
    int m,i,j;
    printf("Enter no. of rows:");
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        int a = 1;
        for(j=1;j<=m;j++)
        {
            int d = a+64;
            char ch = (char)d;
            printf("%c ",ch);
            a++;
        }
            printf("\n");
    }
    return 0;
}