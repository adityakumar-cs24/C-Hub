#include<stdio.h>
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("All factors of %d are : \n",num);
    for(int i =1;i<=num;i++)
    {
        if(num % i == 0)
        printf("%d ",i);
    }
    return 0;
}