#include<stdio.h>
int main(){
    int arr[5] = {2,4,6,8,10};
    int sum = 0;
    for(int i=0;i<5;i++)
    {
        sum +=arr[i];
    }
    printf("%d",sum);
    return 0;
}