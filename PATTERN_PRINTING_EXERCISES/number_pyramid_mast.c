#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter no. of rows:");
    scanf("%d",&n);
    int nsp = n-1;
    for(i=1;i<=n;i++)
    {
        for(int q=1;q<=nsp;q++)
        {
            printf(" ");
        }
        nsp--;
        for(j=1;j<=i;j++)
        {
            char ch = (char)(j+64);
            printf("%c",ch);
        }
        int a = i-1;
        for(int k=1;k<=i-1;k++)
        {
            char ch = (char)(a+64);
            printf("%c",ch);
            a--;
        }
            printf("\n");
    }
    return 0;
}