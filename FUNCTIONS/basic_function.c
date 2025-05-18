#include<stdio.h>
void greet(){
    printf("GOOD MORNING\n");
    printf("HOW ARE YOU?\n");
    return;
}
int main(){
    for(int i=1;i<=10;i++)
    {
        greet();
    }
    //greet();
    //greet();
    return 0;
}