#include<stdio.h>
int main(){
    int n;
    printf("Enter a no. : ");
    scanf("%d",&n);
    printf("Enter elements of array : ");
    int a[n];
    int b[n];
    int idx = 0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            b[idx] = a[i];
            idx++;
        }
    }
    while(idx!=n)
    {
        b[idx] = 0;
        idx++;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}