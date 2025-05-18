#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    printf("\n");
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n");
    int search1,search2;
    scanf("%d %d",&search1,&search2);
    for(int i=0;i<a[i];i++)
    {
        if(search1==a[i])
        {
            printf("search1 = %d element found",search1);
        }
        
    }
    /*(for(int i=0;i<a[i];i++)
    {
        if(search2==a[i])
        {
            printf("search2 = %d element found",search2);
        }
        else{
            printf("search2 = %d element not found",search2);
        }
    }*/
    
    return 0;
}