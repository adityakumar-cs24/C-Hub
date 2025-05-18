#include<stdio.h>
int main(){
    int n,i,sum =0,r,temp;
    printf("Enter a nuumber:");
    scanf("%d",&n);
    temp = n;
    while(n>0)
    {
        r = n%10;
        sum = (sum * 10)+r;
        n = n/10;
    }
    if(temp==sum)
    {
        printf("Pallindrome");
    }
    else
    {
        printf("Not a pallindrome");
    }
    return 0;
}