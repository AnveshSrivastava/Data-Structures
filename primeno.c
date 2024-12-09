#include <stdio.h>

int isPrime(int num) {
    if (num <= 1)
        return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

void primeNumbersInRange(int start, int end) {
    for (int i = start; i <= end; i++) {
        if (isPrime(i))
            printf("%d is a prime number.\n", i);
    }
}

int main() {
    int start, end;
    printf("Enter the range (start and end): ");
    scanf("%d %d", &start, &end);
    
    primeNumbersInRange(start, end);

    return 0;
}
