#include<stdio.h>
#include<limits.h>
#include<stdbool.h>
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
        bool flag = true;
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j] > a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                flag = false;
            }
        }
        if(flag==true) break;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}