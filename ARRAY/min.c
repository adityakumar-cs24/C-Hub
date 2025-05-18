#include<stdio.h>
#include<limits.h>
int main(){
    int a[5] = {-2,-10,-4,-6,-8,};
    int min = INT_MAX;
    for(int i=0;i<5;i++)
    {
        if(min>a[i])
        {
            min = a[i];
        }
    }
    printf("%d",min);
    return 0;
}