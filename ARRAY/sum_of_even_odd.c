#include<stdio.h>
int main(){
    int even_sum = 0;
    int odd_sum = 0;
    int arr[8] = {1,2,3,4,5,6,7,8};
    for(int i=0;i<8;i++)
    {
        if(i%2==0)
        {
            even_sum += arr[i];
        }
        if(i%2!=0)
        {
            odd_sum += arr[i];
        }
    }
    int diff = even_sum - odd_sum;
    printf("%d",diff);
    return 0;
}