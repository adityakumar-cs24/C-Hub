#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Enter no. of elements of array : ");
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j] == 0)
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}