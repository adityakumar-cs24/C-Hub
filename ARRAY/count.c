#include<stdio.h>
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num); 
    int arr[8] = {12,18,20,24,46,32,24,30};
    int count = 0;
    for(int i=1;i<8;i++)
    {
        if(arr[i]>num)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}