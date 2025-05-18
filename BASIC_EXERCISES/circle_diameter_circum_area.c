#include<stdio.h>
int main(){
    float radius,diameter,circumference,area;
    printf("Enter radius:");
    scanf("%f",&radius);
    diameter = 2*radius;
    circumference = 2*3.14*radius;
    area = 3.14*radius*radius;
    printf("%f is the diameter of the circle",diameter);
    printf("\n%f is the circumference of the circle",circumference);
    printf("\n%f is the area of the circle",area);
    return 0;
}