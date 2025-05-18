#include<stdio.h>
#include<math.h>
int main(){
    int num,originalnum,remainder,result,digit;
    printf("Enter a number:");
    scanf("%d",&num);

    for(int i = 1;i<=num;i++)
    {
        originalnum = i;
        result = 0;
        digit = 0;
    

    while(originalnum != 0)
    {
        originalnum /= 10;
        digit++;
    }

    originalnum = i;

    while(originalnum != 0)
    {
        remainder = originalnum % 10;
        result += pow(remainder, digit);
        originalnum /= 10;
    }
    if(result == i)
    {
        printf("%d, ",i);
    }
    }
    return 0;
}