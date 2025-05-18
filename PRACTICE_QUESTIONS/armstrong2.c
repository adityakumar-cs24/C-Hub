#include<stdio.h>
#include<math.h>
int main(){
    int n,num,originalnum,armstrong,remainder,digits;
    printf("Enter upper limit:");
    scanf("%d",&n);

    for(num = 1;num<=n;num++)
    {
        originalnum = num;
        armstrong = 0;
        digits = 0;

        while(originalnum != 0){
            originalnum /= 10;
            digits++;
        }

        originalnum = num;

        while(originalnum != 0){
            remainder = originalnum % 10;
            armstrong += pow(remainder, digits);
            originalnum /= 10;
        }
        
        if(num == armstrong){
            printf("%d, ",num);
        }
    }
    printf("\n");
    return 0;
}