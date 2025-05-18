#include<stdio.h>
int main(){
    int n,num,rev_num = 0;
    printf("Enter a number : ");
    scanf("%d",&n);
    num = n;
    while(n != 0)
    {
        rev_num = (rev_num * 10) + (n % 10);
        n = n / 10;
    }
    if(rev_num == num)
    {
        printf("Pallindrome Number");
    }
    else
    {
        printf("Not a Pallindrome Number");
    }

    return 0;
}