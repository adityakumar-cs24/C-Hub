#include<stdio.h>
int main(){
    int a[2+3]={1,2,3,4,5};
    for(int i=1;i<5;i++)
    {
        printf("%p\n",&a[i]);
    }
    return 0;
} 