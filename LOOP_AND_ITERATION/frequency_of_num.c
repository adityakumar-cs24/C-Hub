#include <stdio.h>
int main() {
    int num, digit;
    int count0 = 0, count1 = 0, count2 = 0, count3 = 0, count4 = 0;
    int count5 = 0, count6 = 0, count7 = 0, count8 = 0, count9 = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 0) {
        num = -num;
    }
    while (num > 0) {
        digit = num % 10;
        switch (digit) {
            case 0: count0++; break;
            case 1: count1++; break;
            case 2: count2++; break;
            case 3: count3++; break;
            case 4: count4++; break;
            case 5: count5++; break;
            case 6: count6++; break;
            case 7: count7++; break;
            case 8: count8++; break;
            case 9: count9++; break;
        }
        num /= 10;
    }
    printf("Digit frequencies:\n");
    printf("Digit 0: %d\n", count0);
    printf("Digit 1: %d\n", count1);
    printf("Digit 2: %d\n", count2);
    printf("Digit 3: %d\n", count3);
    printf("Digit 4: %d\n", count4);
    printf("Digit 5: %d\n", count5);
    printf("Digit 6: %d\n", count6);
    printf("Digit 7: %d\n", count7);
    printf("Digit 8: %d\n", count8);
    printf("Digit 9: %d\n", count9);

    return 0;
}
