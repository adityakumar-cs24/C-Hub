#include<stdio.h>
int main(){
    int n;
    printf("Enter a no. : ");
    scanf("%d",&n);
    printf("Enter no. of elements in array : ");
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n-1;i++)
    {
        int j=i;
        while(j>0 && a[j] < a[j-1])
        {
            int temp = a[j];
            a[j] = a[j-1];
            a[j-1] = temp;
            j--;
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}