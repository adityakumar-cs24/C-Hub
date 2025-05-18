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
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]%a[j]==0)
            {
                
            }
        }
    }
    return 0;
}