#include<stdio.h>
int main(){
    int num,prime,sum = 0;
    printf("Enter a no. :");
    scanf("%d",&num);
    printf("Sum of Prime numbers between 1 to %d is : \n",num);
    for(int i=2;i<=num;i++)
    {
        prime = 1;
        for(int j=2;j <= i/2;j++)
        {
            if(i % j == 0)
            {
            prime = 0;
            break;
            }
        }
    
        if(prime == 1)
        {
            sum = sum + i;
        }
    }
    printf("%d",sum);
    printf("\n");
    return 0;
}