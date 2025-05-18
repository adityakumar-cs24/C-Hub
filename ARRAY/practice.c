#include <stdio.h>  
#include <stdlib.h>  

int longestSubarray(int* arr, int n) {  
    int left = 0, right = 0;  
    int maxLength = 0;  
    int count[100001] = {0}; // Assuming arr[i] <= 10^9, we can use a map or array for counting  

    while (right < n) {  
        count[arr[right]]++;  

        // Check if we have more than 2 distinct values or if the values differ by more than 1  
        while (count[arr[right]] > 0 && (count[arr[right]] + count[arr[right] - 1] + count[arr[right] + 1]) > 2)
        {  
            count[arr[left]]--;  
            if (count[arr[left]] == 0) {  
                count[arr[left]] = 0; // Remove the count  
            }  
            left++;  
        }  

        // Update maxLength  
        maxLength = (right - left + 1) > maxLength ? (right - left + 1) : maxLength;  
        right++;  
    }  

    return maxLength;  
}  

int main() {  
    int n;  
    printf("Enter the number of elements: ");  
    scanf("%d", &n);  
    
    int* arr = (int*)malloc(n * sizeof(int));  
    printf("Enter the elements:\n");  
    for (int i = 0; i < n; i++) {  
        scanf("%d", &arr[i]);  
    }  

    int result = longestSubarray(arr, n);  
    printf("Length of the longest subarray: %d\n", result);  

    free(arr);  
    return 0;  
}