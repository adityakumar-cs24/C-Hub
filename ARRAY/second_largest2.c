#include<stdio.h>
#include<limits.h>
int main(){
    int a[8] = {8,7,6,6,4,4,2,2};
    int max = INT_MIN;
    int smax = INT_MIN;
    for(int i=0;i<8;i++)
    {
        if(max<a[i])
        {
            smax = max;
            max = a[i];
        }
        else if(smax<a[i] && max!=a[i])
        {
            smax = a[i];
        }
    }
    printf("First max = %d",max);
    printf("\nSecond max = %d",smax);
    return 0;
}