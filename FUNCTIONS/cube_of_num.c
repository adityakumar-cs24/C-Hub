#include<stdio.h>
int cube(int a){
    return a*a*a;
}
int main(){
    int n;
    printf("Enter a no. : ");
    scanf("%d",&n);
    int p = cube(n);
    printf("Cube of %d : %d",n,p);
    return 0;
}