#include<stdio.h>
int main(){
    int a[8] = {1,2,3,4,5,6,7,8};
    int num;
    printf("ENTER A NO. : ");
    scanf("%d",&num);
    int totaltriplets = 0;
    for(int i=0;i<8;i++)
    {
        for(int j=i+1;j<8;j++)
        {
            for(int k=j+1;k<8;k++)
            {
                if(a[i] + a[j] + a[k] == num)
                {
                    totaltriplets++;
                    printf("(%d,%d,%d)\n",a[i],a[j],a[k]);
                }
            }
        }
    }
    printf("%d",totaltriplets);
    return 0;
}