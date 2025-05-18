#include<stdio.h>
int main(){
    int n;
    printf("Enter no. of element : ");
    scanf("%d",&n);
    printf("Enter elements of array : ");
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int count1 = 0;
    int count2 = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i] %2 == 0)
        {
            count1++;
        }
        if(a[i] % 2 != 0)
        {
            count2++;
        }
    }
    printf("Total no. of even no. : %d\nTotal no. of odd no. : %d",count1,count2);
    return 0;
}