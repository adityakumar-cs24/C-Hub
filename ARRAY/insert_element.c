#include<stdio.h>
int main(){
    int n;
    printf("Enter size of elements : ");
    scanf("%d",&n);
    printf("Enter elements of array : ");
    int a[100];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int m;
    printf("Enter a no. to insert : ");
    scanf("%d",&m);
    int p;
    printf("Enter element position  to insert : ");
    scanf("%d",&p);
    if(p > n+1 || p <= 0)
    {
        printf("Invalid Position !");
    }
    else{
        for(int i = n; i >= p; i--)
        {
            a[i] = a[i-1];
        }
            a[p-1] = m;
            n++;
        for(int i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
    }
    return 0;
}