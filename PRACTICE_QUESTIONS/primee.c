#include<stdio.h>
int main(){
    int num,count = 0;
    printf("Enter a number:");
    scanf("%d",&num);
    for(int i = 1;i<=num;i++)
    {
        if(num % i == 0)
        {
            count++;
        }
    }
    if(count == 2)
    {
        printf("Prime number");
    }
    else
    {
        printf("Not a prime number");
    }
    return 0;
}