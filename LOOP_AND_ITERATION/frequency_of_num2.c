#include <stdio.h>
int main() {
    int num, digit;
    int frequency[10] = {0};
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 0) {
        num = -num;
    }
    while (num > 0) {
        digit = num % 10;
        frequency[digit]++;
        num /= 10;
    }
    printf("Digit frequencies:\n");
    for (digit = 0; digit < 10; digit++) {
        printf("Digit %d: %d\n", digit, frequency[digit]);
    }

    return 0;
}
