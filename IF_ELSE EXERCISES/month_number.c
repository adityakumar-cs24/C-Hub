#include<stdio.h>
int main(){
    int month_number;
    printf("Enter month number:");
    scanf("%d",&month_number);

    if(month_number == 1)
    {
        printf("Days:31");
    }
    else if(month_number == 2)
    {
        printf("Days:28 0r 29");
    }
    else if(month_number == 3)
    {
        printf("Days:31");
    }
    else if(month_number == 4)
    {
        printf("Days:30");
    }
    else if(month_number == 5)
    {
        printf("Days:31");
    }
    else if(month_number == 6)
    {
        printf("Days:30");
    }
    else if(month_number == 7)
    {
        printf("Days:31");
    }
    else if(month_number == 8)
    {
        printf("Days:31");
    }
    else if(month_number == 9)
    {
        printf("Days:30");
    }
    else if(month_number == 10)
    {
        printf("Days:31");
    }
    else if(month_number == 11)
    {
        printf("Days:30");
    }
    else if(month_number == 12)
    {
        printf("Days:31");
    }
    else
    {
        printf("Invalid month number");
    }
    return 0;
}