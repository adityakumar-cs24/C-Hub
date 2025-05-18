#include<stdio.h>
#include<limits.h>
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
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int max = INT_MIN;
    int min = INT_MAX;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(min>arr[i][j])
            {
                min = arr[i][j];
            }
        }
    }
    printf("Min = %d\n",min);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(max<arr[i][j])
            {
                max = arr[i][j];
            }
        }
    }
    printf("Max = %d\n",max);
    return 0;
}