#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    printf("\n");
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n");
    int max,min;
    max=min=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<max)
        {
            min=a[i];
        }
    }
        printf("max no. = %d ",max);
        printf("\nmin no. = %d ",min);
    return 0;
}