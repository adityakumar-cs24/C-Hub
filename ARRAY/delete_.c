#include<stdio.h>
int main(){
    int n;
    printf("Enter size of the array : ");
    scanf("%d",&n);
    printf("Enter elements of the array : ");
    int a[100];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int p;
    printf("Enter position to delete element : ");
    scanf("%d",&p);
    if(p < 0 || p > n)
    {
        printf("Position is invalid !");
    }
    else
    {
        for(int i=p-1;i<n-1;i++)
        {
            a[i] = a[i+1];
        }
            n--;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}