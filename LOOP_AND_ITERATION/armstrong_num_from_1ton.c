#include <stdio.h>
#include <math.h>
int main() {
    int n, num, originalNum, remainder, armstrong, digits;

    printf("Enter the upper limit (n): ");
    scanf("%d", &n);
    printf("Armstrong numbers from 1 to %d are:\n", n);

    for (num = 1; num <= n; num++) {
        originalNum = num;
        armstrong = 0;
        digits = 0;

        while (originalNum != 0) {
            originalNum /= 10;
            digits++;
        }

        originalNum = num;

        while (originalNum != 0) {
            remainder = originalNum % 10;
            armstrong += pow(remainder, digits);
            originalNum /= 10;
        }

        if (num == armstrong) {
            printf("%d ", num);
        }
    }

    printf("\n");
    return 0;
}
