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
    int max_count = INT_MIN;
    int max_Index = -1;
    for(int i=0;i<m;i++)
    {
        int count = 0;
        for(int j=0;j<n;j++)
        {
            if(arr[i][j] == 1)
            {
                count++;
            }
        }
            if(count>max_count)
            {
                max_count = count;
                max_Index = i;
            } 
    }
    printf("Row with maximum number of 1 is %d row and number of 1 = %d",max_Index,max_count);    
    return 0;
} 