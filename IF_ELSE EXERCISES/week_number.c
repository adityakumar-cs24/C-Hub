#include<stdio.h>
int main(){
    int week_number;
    printf("Enter week number:");
    scanf("%d",&week_number);

    switch(week_number){
        case 1:
            printf("Day:Sunday\n");
            break;
        case 2:
            printf("Day:Monday\n");
            break;
        case 3:
            printf("Day:Tuesday\n");
            break;
        case 4:
            printf("Day:Wednesay\n");
            break;
        case 5:
            printf("Day:Thursday\n");
            break;
        case 6:
            printf("Day:Friday\n");
            break;
        case 7:
            printf("Day:Saturday\n");
            break;
        default :
            printf("Invalid weeek number");
    }
    return 0;

}