#include<stdio.h>
int main(){
    int num,originalnum,count = 0;
    printf("Enter a number:");
    scanf("%d",&num);
    originalnum = num;
    for(int i = 1;i<num;i++)
    {
        if(num % i == 0)
        {
        count = count + i;
        }
    }
    if(count == originalnum)
    {
        printf("%d is a Perfect number.\n",count);
    }
    else
    {
        printf("%d is Not a Perfect number.\n",count);
    }
    return 0;
}