#include<stdio.h>
int main(){
    int start,end,a,b,c;
    printf("Enter starting term:");
    scanf("%d",&start);
    printf("Enter end term:");
    scanf("%d",&end);
    printf("Fibonacci series between %d to %d are:",start,end);
    a = 0;
    b = 1;
    c = 0;
    while(c <= end)
    {
        if(c >= start)
        {
            printf("%d, ",c);
        }
        a = b;
        b = c;
        c = a+b;
    }
    return 0;
}