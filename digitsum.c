#include <stdio.h>

int sumOfDigitsToSingleDigit(int n) {
    while (n >= 10) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        n = sum;
    }
    return n;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Single digit sum: %d\n", sumOfDigitsToSingleDigit(n));

    return 0;
}
