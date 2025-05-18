#include<stdio.h>
int main(){
    int start,end,a,b,c;
    printf("Enter starting no.:");
    scanf("%d",&start);
    printf("Enter ending no.:");
    scanf("%d",&end);
    printf("Fibonacci series from %d to %d are:\n",start,end);
    a = 0;
    b = 1;
    c= 0;

    while(c <= end)
    {
        if(c >= start)
        {
            printf("%d, ",c);
        }
        a = b;
        b = c;
        c = a + b;
    }
    return 0;
}