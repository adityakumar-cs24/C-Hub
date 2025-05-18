#include<stdio.h>
int main(){
    int num,prime;
    printf("Enter a number to find its prime factors:");
    scanf("%d",&num);
    printf("All prime factors of %d are :\n",num);
    for(int i = 2;i<=num;i++)
    {
        if(num % i == 0)
        {
            prime = 1;
            for(int j = 2;j<=i/2;j++)
            {
                if(i%j==0)
                {
                    prime = 0;
                    break;
                }
            }
            if(prime == 1)
            {
                printf("%d, ",i);
            }
            
        }
    }
    return 0;
}