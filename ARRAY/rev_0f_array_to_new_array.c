#include<stdio.h>
int main(){
    int a[5] = {1,2,3,4,5};
    printf("ORIGINAL ARRAY = ");
    for(int i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("REVERSE ARRAY = ");
    int b[5];
    for(int i=5;i>0;i--)
    {
        printf("%d ",a[i-1]);
    }
    return 0;
}