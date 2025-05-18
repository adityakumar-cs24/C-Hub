#include<stdio.h>
int main(){
    int m,n;
    printf("Enter no. of rows : ");
    scanf("%d",&m);
    printf("Enter no. of columns : ");
    scanf("%d",&n);
    printf("Enter elements of array : \n"); 
    int arr[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("MATRIX 1 : \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    int brr[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&brr[i][j]);
        }
    }
    printf("MATRIX 2 : \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",arr[i][j] + brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}