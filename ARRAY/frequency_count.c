#include<stdio.h>
int main(){
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    printf("Enter elements of array : ");
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int m;
    int count = 0;
    printf("Enter element to count it's frequency : ");
    scanf("%d",&m);
    for(int i=0;i<n;i++)
    {
        if(a[i] == m)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}