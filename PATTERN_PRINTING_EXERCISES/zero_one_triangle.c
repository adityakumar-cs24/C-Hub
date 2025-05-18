#include<stdio.h>
int main(){
    int m,i,j;
    printf("Enter no. of rows:");
    scanf("%d",&m);
    int a;
    for(i=1;i<=m;i++)
    {
        if(i%2!=0) a = 1;
        else a = 0;
        for(j=1;j<=i;j++)
        {
            printf("%d",a);
            if(a==0) a = 1;
            else a = 0;
        }
            printf("\n");
    }
    return 0;
}