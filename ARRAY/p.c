#include <stdio.h>
#include <stdlib.h>

// Function to calculate the sum for each query
long* findSum(int* numbers, int n, int queries[][3], int q) {
    // Allocate result array
    long* result = (long*)malloc(q * sizeof(long));

    // Process each query
    for (int i = 0; i < q; i++) {
        int l = queries[i][0]; // Start index (1-indexed)
        int r = queries[i][1]; // End index (1-indexed)
        int x = queries[i][2]; // Value to add for zeroes
        long sum = 0;          // Initialize sum for the query

        // Calculate sum for the range [l, r]
        for (int j = l - 1; j <= r - 1; j++) { // Convert 1-indexed to 0-indexed
            if (numbers[j] == 0) {
                sum += x; // Add x for each zero
            } else {
                sum += numbers[j]; // Add the number itself
            }
        }

        // Store the result for this query
        result[i] = sum;
    }

    return result;
}

int main() {
    // Input the length of the array
    int n;
    scanf("%d", &n);

    // Input the array elements
    int* numbers = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    // Input the number of queries
    int q;
    scanf("%d", &q);

    // Input the queries
    int queries[q][3];
    for (int i = 0; i < q; i++) {
        scanf("%d %d %d", &queries[i][0], &queries[i][1], &queries[i][2]);
    }

    // Calculate the results
    long* result = findSum(numbers, n, queries, q);

    // Output the results
    for (int i = 0; i < q; i++) {
        printf("%ld\n", result[i]);
    }

    // Free allocated memory
    free(numbers);
    free(result);

    return 0;
}
