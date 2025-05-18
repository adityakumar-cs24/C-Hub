#include<stdio.h>
int main ()
{
    int i,n,sum=0,r,temp;
    printf("enter n:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum*r*r*r;
        n=n/10;
    }
    if(sum==temp)
    {
        printf("armstrom number");
    }

    else
    {
        printf("not an armstrom number");
    }
    return 0;
}