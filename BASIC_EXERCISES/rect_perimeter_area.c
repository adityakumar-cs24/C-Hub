#include<stdio.h>
int main(){
    int length,width,perimeter,area;
    printf("Enter length : ");
    scanf("%d",&length);
    printf("Enter width : ");
    scanf("%d",&width);
    perimeter = 2*(length+width);
    area = (length*width);
    printf("%d is the perimeter of rectangle",perimeter);
    printf("\n%d is the area of the rectangle",area);

    return 0;
}