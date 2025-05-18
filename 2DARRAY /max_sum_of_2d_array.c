#include<stdio.h>
#include<limits.h>
int main(){
    int m,n;
    printf("Enter no. of rows : ");
    scanf("%d",&m);
    printf("Enter no. of columns : ");
    scanf("%d",&n);
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
    int max_sum = INT_MIN;
    int max_row = -1;
    for(int i=0;i<m;i++)
    {
        int sum = 0;
        for(int j=0;j<n;j++)
        {
           sum += arr[i][j]; 
        }
        if(sum>max_sum)
        {
            max_sum = sum;
            max_row = i;
        }
    } 
    printf("Row with maximum sum is %d row is = %d",max_row,max_sum);    
    return 0;
} 