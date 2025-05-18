#include <stdio.h>
int isPalindrome(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        if (arr[start] != arr[end]) {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements of the array: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (isPalindrome(arr, n)) {
        printf("The array is a palindrome.\n");
    } else {
        printf("The array is not a palindrome.\n");
    }

    return 0;
}
