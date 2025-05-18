#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        int min = INT_MAX;
        int minidx = -1;
        for(int j=i;j<=n-1;j++)
        {
            if(min > a[j])
            {
                min = a[j];
                minidx = j;
            }
        }
        int temp = a[minidx];
        a[minidx] = a[i];
        a[i] = temp;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
} 
