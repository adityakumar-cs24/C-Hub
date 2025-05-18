#include<stdio.h>
int main(){
    int r,c;
    printf("Enter no. of rows of 1st matrix : ");
    scanf("%d",&r);
    printf("Enter no. of columns of 1st matrix : ");
    scanf("%d",&c);
    printf("Enter elements of 1st matrix : \n"); 
    int a[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int m,n;
    printf("Enter no. of rows of 2nd matrix : ");
    scanf("%d",&m);
    printf("Enter no. of columns of 2nd matrix : ");
    scanf("%d",&n); 
    printf("Enter elements of 2nd matrix : \n");
    int b[m][n];
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    if(c!=m)
    {
        printf("Matrices can not be multiplied.");
    }
    else
    {
        int res[r][n];
        int t = c = m;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<n;j++)
            {
                res[i][j] = 0;
                for(int k = 0;k<t;k++)
                {
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        printf("Resultant matrix is : \n");
        for(int i=0;i<r;i++)
        {  
            for(int j=0;j<n;j++)
            {
                printf("%d ",res[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}