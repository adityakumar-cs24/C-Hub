#include<stdio.h>
#include<limits.h>
int main(){
    int a[5] = {-2,-10,-4,-6,-8,};
    int max = INT_MIN;
    for(int i=0;i<5;i++)
    {
        if(max<a[i])
        {
            max = a[i];
        }
    }
    printf("%d",max);
    return 0;
}