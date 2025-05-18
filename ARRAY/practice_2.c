#include <stdio.h>  
#include <stdlib.h>  

int longestSubarray(int* arr, int n) {  
    int left = 0, right = 0;  
    int maxLength = 0;  
    int freq[100] = {0};  // Frequency array for values (assuming array elements are small)  

    while (right < n) {  
        freq[arr[right]]++;  

        // Check if we have more than 2 distinct values or values differ by more than 1  
        while (freq[arr[right]] > 0 &&  ((freq[arr[right]] > 0 && freq[arr[right] - 1] <= 0) ||  (freq[arr[right]] > 0 && freq[arr[right] + 1] <= 0))) &&  (arr[right] - arr[right-1] > 1)) {  
            freq[arr[left]]--;  
            if (freq[arr[left]] == 0) {  
                freq[arr[left]] = 0; // Remove the count  
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