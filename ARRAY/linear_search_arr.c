#include<stdio.h>
int main(){
    int n;
    printf("Enter no. of  elements in array : ");
    scanf("%d",&n);
    int num,found = 0;
    printf("Enter a number : ");
    scanf("%d",&num);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i] == num)
        {
            printf("%d is found in the array and its index is %d.\n ",num,i);
            found = 1;
        }
    }
    if(!found)
    {
        printf("%d is not found in the array.",num);
    }
    return 0;
}