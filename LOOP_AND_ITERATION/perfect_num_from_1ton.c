#include<stdio.h>
int main(){
    int num,sum;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("All perfect numbers between 1 to %d are:\n",num);
    for(int i = 1;i<=num;i++)
    {
        sum = 0;
        for(int j = 1;j<i;j++)
        {
            if(i % j == 0)
            {
                sum = sum + j;
            }
        }
        if(sum == i)
        {
            printf("%d, ",i);
        }

    }
    return 0;
}