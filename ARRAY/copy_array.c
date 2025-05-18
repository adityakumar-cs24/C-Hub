#include<stdio.h>
int main(){
    int n;
    printf("Enter no. of elements : ");
    scanf("%d",&n);
    printf("Elements of array : ");
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int b[n];
    for(int i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}