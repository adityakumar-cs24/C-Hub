#include <stdio.h>
int isPrime(int n) {
    if (n <= 1) 
        return 0;
    for (int i = 2; i * i <= n; i++) 
    {
        if (n % i == 0) 
            return 0; 
    }
    return 1;
}
int removePrimes(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++) 
    {
        if (!isPrime(arr[i]))
        {
            arr[j++] = arr[i];
        }
    }
    return j;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    n = removePrimes(arr, n);
    
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
