#include<stdio.h>
int main(){
    int Physics,Chemistry,Biology,Mathematics,Computer;
    float Percentage;
    printf("Enter marks of Physics:");
    scanf("%d",&Physics);
    printf("Enter marks of Chemistry:");
    scanf("%d",&Chemistry);
    printf("Enter marks of Biology:");
    scanf("%d",&Biology);
    printf("Enter marks of Mathematics:");
    scanf("%d",&Mathematics);
    printf("Enter marks of Computer:");
    scanf("%d",&Computer);

    Percentage = (Physics+Chemistry+Biology+Mathematics+Computer) / 5.0;
    printf("Percentage = %.2f\n",Percentage);

    if(Percentage >= 90)
    {
        printf("Grade A");
    }
    else if(Percentage >= 80)
    {
        printf("Grade B");
    }
    else if(Percentage >= 70)
    {
        printf("Grade C");
    }
    else if(Percentage >= 60)
    {
        printf("Grade D");
    }
    else if(Percentage >= 40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
    return 0;
}