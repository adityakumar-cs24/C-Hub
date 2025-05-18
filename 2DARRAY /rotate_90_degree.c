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
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<m;i++)
    {
        for(int j=i;j<n;j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;

        }
    }
    for(int i=0;i<m;i++)
    {
        int j = 0;
        int k = n - 1;
        while(j<k)
        {  
            int temp = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = temp;
            j++;
            k--;

        }
    }
    printf("\nAfter 90 degree rotation of matrix : \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
} 