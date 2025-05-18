#include<stdio.h>
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b; 
    *b = temp;
    return;
}
int main(){
    int x,y;
    printf("Enter x : ");
    scanf("%d",&x);
    printf("Enter y : ");
    scanf("%d",&y);
    swap(&x,&y);
    printf("After swapping :\na : %d\nb : %d",x,y);
    return 0;
}