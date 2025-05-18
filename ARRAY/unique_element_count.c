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
    
    return 0;
}