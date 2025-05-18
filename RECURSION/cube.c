#include<stdio.h>
int cube(int n)
{
    int recANS = n*n*n;
    return recANS;
}
int main(){
    int n;
    printf("Enter a no. : ");
    scanf("%d",&n);
    int res = cube(n);
    printf("Cube of %d is : %d",n,res);
    return 0;
}