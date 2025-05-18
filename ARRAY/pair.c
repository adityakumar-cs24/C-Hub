#include<stdio.h>
int main(){
    int a[8] = {1,2,3,4,5,6,7,8};
    int num;
    printf("ENTER A NO. : ");
    scanf("%d",&num);
    int totalpairs = 0;
    for(int i=0;i<8;i++)
    {
        for(int j=i+1;j<8;j++)
        {
            if(a[i] + a[j] == num)
            {
                totalpairs++;
                printf("(%d,%d)\n",a[i],a[j]);
            }
        }
    }
    printf("%d",totalpairs);
    return 0;
}