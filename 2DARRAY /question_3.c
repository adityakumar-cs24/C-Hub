#include <stdio.h>
int main() {
    int rows, columns;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &columns);

    int arr[rows][columns];
    printf("Enter elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int j = 0; j < columns; j++) {
        int columnSum = 0;
        for (int i = 0; i < rows; i++) {
            columnSum += arr[i][j];
        }
        printf("Sum of columns %d: %d\n", j + 1, columnSum);
    }

    return 0;
}
