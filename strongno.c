#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int isStrongNumber(int num) {
    int sum = 0, temp = num;
    while (temp != 0) {
        sum += factorial(temp % 10);
        temp /= 10;
    }
    return sum == num;
}

void strongNumbersLessThanOrEqualToN(int N) {
    for (int i = 1; i <= N; i++) {
        if (isStrongNumber(i))
            printf("%d is a Strong number.\n", i);
    }
}

int main() {
    int N;
    printf("Enter a number N: ");
    scanf("%d", &N);
    
    strongNumbersLessThanOrEqualToN(N);

    return 0;
}
