#include<stdio.h>
int main(){
    int num,originalnum,ld,sum,factorial;
    printf("Enter a number:");
    scanf("%d",&num);
    
    for(int i=1;i<=num;i++)
    {
        originalnum = i;
        sum = 0;

    while(originalnum>0)
    {
        factorial = 1;
        ld = originalnum%10;
        for(int j=1;j<=ld;j++)
        {
            factorial = factorial * j;

        }
        sum = sum + factorial;
        originalnum = originalnum / 10;
    }
    if(sum == i)
    {
        printf("%d, ",i);
    }
    }
    return 0;
}