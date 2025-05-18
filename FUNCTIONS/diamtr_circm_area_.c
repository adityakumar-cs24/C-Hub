#include<stdio.h>
int diameter(int radius){
    return 2 * radius;
}
int circumference(int radius){
    return 2 * 3.14 * radius;
}
int area(int radius){
    return 3.14 * radius * radius;
}
int main(){
    int radius;
    printf("Enter radius : ");
    scanf("%d",&radius);
    int diamtr = diameter(radius);
    int circum = circumference(radius);
    int a = area(radius);
    printf("Diameter : %d\n",diamtr);
    printf("Circumference : %d\n",circum);
    printf("Area : %d",a);
    return 0;
}