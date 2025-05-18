#include<stdio.h>
#include<limits.h>
int main(){
    int a[8] = {1,2,3,4,5,6,7,8};
    int max = INT_MIN;
    int smax = INT_MIN;
    for(int i=0;i<8;i++)
    {
        if(max<a[i])
        {
            max = a[i];
        }
    }
    for(int i=0;i<8;i++)
    {
        if(smax<a[i] && a[i]!=max)
        {
            smax = a[i];
        }
    }
    printf("%d",max);
    printf("\n%d",smax);
    return 0;
}