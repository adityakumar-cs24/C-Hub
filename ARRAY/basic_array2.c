#include<stdio.h>
int main(){
    int a[5];
    for(int i=0;i<5;i++)
    {
        printf("Enter Element no.%d : ",i);
        scanf("%d",&a[i]);
    }
    printf("Array :\n");
    for(int i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nReverse of Array :\n");
    for(int i=4;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
    return 0;
}