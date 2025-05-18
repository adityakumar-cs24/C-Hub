#include<stdio.h>
int main(){
    int num,originalnum,sum,ld,factorial;
    printf("Enter a nunber:");
    scanf("%d",&num);
    originalnum = num;
    sum = 0;

    while(num>0)
    {
        ld = num % 10;
        factorial = 1;
        for(int i = 1;i<=ld;i++)
        {
            factorial = factorial * i;
        }
        sum = sum + factorial;
        num = num / 10;
    }
    if(sum == originalnum)
    {
        printf("%d is Strong number",originalnum);
    }
    else
    {
        printf("%d is not a Strong number",originalnum);
    }
    return 0;
}