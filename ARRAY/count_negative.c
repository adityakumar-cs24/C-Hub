#include<stdio.h>
int main(){
    int n;
    printf("Enter no. elements : ");
    scanf("%d",&n);
    printf("Enter elements of array : ");
    int a[n];
    int count = 0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i] < 0)
        count++;
    }
    printf("%d",count);
    return 0;
}