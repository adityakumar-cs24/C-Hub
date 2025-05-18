#include<stdio.h>
int main(){
    int side_1,side_2,side_3;
    printf("Enter first side:");
    scanf("%d",&side_1);
    printf("Enter second side:");
    scanf("%d",&side_2);
    printf("Enter third side:");
    scanf("%d",&side_3);

    if(side_1 + side_2 > side_3 && side_1 + side_3 > side_2 && side_2 + side_3 > side_1)
    {
        printf("Valid triangle");
    }
    else
    {
        printf("Invalid triangle");
    }
    return 0;
}