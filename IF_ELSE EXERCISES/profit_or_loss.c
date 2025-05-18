#include<stdio.h>
int main(){
    int cp,sp,amount;
    printf("Enter cost price:");
    scanf("%d",&cp);
    printf("Enter selling price:");
    scanf("%d",&sp);

    if(cp>sp)
    {
        amount = cp - sp;
        printf("Loss = %d",amount);
    }
    else if(sp>cp)
    {
        amount = sp-cp;
        printf("Profit = %d",amount);
    }
    else
    {
        printf("Neither profit nor loss");
    }
    return 0;
}