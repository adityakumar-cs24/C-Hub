#include<stdio.h>
int main(){
    int num,cur,sum,ld,factorial;
    printf("Enter a nunber:");
    scanf("%d",&num);
    printf("All strong numbers between 1 to %d are:\n",num);
    
    for(int i=1;i<=num;i++)
    {
        cur = i;
        sum = 0;

        while(cur>0)
        {
            factorial = 1;
            ld = cur % 10;
            for(int j=1;j<=ld;j++)
            {
                factorial = factorial * j;
            }
            sum = sum + factorial;
            cur = cur / 10;
        }
        if (sum == i)
        {
            printf("%d, ",i);
        }
    }    
    return 0;
}