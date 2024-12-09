#include <stdio.h>

float mean(int a, int b, int c, int d, int e) {
    return (a + b + c + d + e) / 5.0;
}

float median(int a, int b, int c, int d, int e) {
    int numbers[] = {a, b, c, d, e};
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (numbers[i] > numbers[j]) {
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
    return numbers[2];  // middle element for 5 numbers
}

int main() {
    int a, b, c, d, e;
    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    
    printf("Mean: %.2f\n", mean(a, b, c, d, e));
    printf("Median: %.2f\n", median(a, b, c, d, e));

    return 0;
}
