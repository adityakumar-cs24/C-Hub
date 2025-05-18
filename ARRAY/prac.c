#include <stdio.h>
#include<stdlib.h>
int longestSubarray(int arr[], int n) {
    int maxLength = 0;
    int start = 0;
    int value1 = arr[0], value2 = -1, countValue1 = 0, countValue2 = 0;

    for (int end = 0; end < n; end++) {
        // Update counts of the two distinct values
        if (arr[end] == value1) {
            countValue1++;
        } else if (value2 == -1 || arr[end] == value2) {
            value2 = arr[end];
            countValue2++;
        } else {
            // Reset window when more than two distinct values
            while (countValue1 > 0 && countValue2 > 0) {
                if (arr[start] == value1) {
                    countValue1--;
                } else {
                    countValue2--;
                }
                start++;
            }
            // Assign new values
            if (countValue1 == 0) {
                value1 = arr[end];
                countValue1++;
            } else {
                value2 = arr[end];
                countValue2++;
            }
        }

        // Check if values differ by more than 1
        if (value1 != -1 && value2 != -1 && abs(value1 - value2) > 1) {
            while (countValue1 > 0 && countValue2 > 0) {
                if (arr[start] == value1) {
                    countValue1--;
                } else {
                    countValue2--;
                }
                start++;
            }
            // Reset one of the values
            if (countValue1 == 0) {
                value1 = arr[end];
                countValue1++;
            } else {
                value2 = arr[end];
                countValue2++;
            }
        }

        // Update maximum length
        int windowLength = end - start + 1;
        if (windowLength > maxLength) {
            maxLength = windowLength;
        }
    }

    return maxLength;
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = longestSubarray(arr, n);
    printf("Length of the longest subarray: %d\n", result);

    return 0;
}
