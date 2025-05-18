#include<stdio.h>
int main(){
    int angle_1,angle_2,angle_3;
    printf("Enter first angle:");
    scanf("%d",&angle_1);
    printf("Enter second angle:");
    scanf("%d",&angle_2);
    printf("Enter third angle:");
    scanf("%d",&angle_3);

    if(angle_1+angle_2+angle_3 == 180 && angle_1>0 && angle_2>0 && angle_3>0)
    {
        printf("Valid triangle");
    }
    else
    {
        printf("Invalid triangle");
    }
    return 0;
}