#include<stdio.h>
int main (){
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
    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    printf("\nTranspose Matrix:\n");
    for (int j = 0; j < columns; j++) {
        for (int i = 0; i < rows; i++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}    