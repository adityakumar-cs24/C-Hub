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
    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < columns; j++) {
            rowSum += arr[i][j];
        }
        printf("Sum of row %d: %d\n", i + 1, rowSum);
    }

    return 0;
}
