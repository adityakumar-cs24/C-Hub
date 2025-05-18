#include<stdio.h>
int main(){
    int n;
    printf("Enter no. of  elements in array : ");
    scanf("%d",&n);
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        int found = 0;
        for(int j=i+1;j<=n;j++)
        {
            if(arr[i] == arr[j])
            {
                printf("%d is duplicate element.\n",arr[i]);
                found = 1;   
            }
        }
        if(found == 0)
        {
            printf("%d is not duplicate element.",num);
            break;
        }
    } 
    return 0;
}