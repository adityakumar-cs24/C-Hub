#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("Enter no. of elements : ");
    scanf("%d",&n);
    printf("Enter elements of array : ");
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max1)
        {
            max2 = max1;
            max1 = a[i]; 
        }
    }
    printf("%d",max2);
    return 0;
}