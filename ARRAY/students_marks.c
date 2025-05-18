#include<stdio.h>
int main(){
    int marks[10] = {90,95,78,33,28,22,75,65,98,100};
    for(int i=0;i<10;i++)
    {
        if(marks[i]<35)
        {
            printf("%d ",i);
        }
    }

    return 0;
}