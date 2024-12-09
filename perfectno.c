#include <stdio.h>

int isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0)
            sum += i;
    }
    return sum == num;
}

void perfectNumbersInRange(int start, int end) {
    for (int i = start; i <= end; i++) {
        if (isPerfect(i))
            printf("%d is a perfect number.\n", i);
    }
}

int main() {
    int start, end;
    printf("Enter the range (start and end): ");
    scanf("%d %d", &start, &end);
    
    perfectNumbersInRange(start, end);

    return 0;
}
