#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int sum = 0, temp = num, digits = 0;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }
    temp = num;
    while (temp != 0) {
        sum += pow(temp % 10, digits);
        temp /= 10;
    }
    return sum == num;
}

void armstrongNumbersInRange(int start, int end) {
    for (int i = start; i <= end; i++) {
        if (isArmstrong(i))
            printf("%d is an Armstrong number.\n", i);
    }
}

int main() {
    int start, end;
    printf("Enter the range (start and end): ");
    scanf("%d %d", &start, &end);
    
    armstrongNumbersInRange(start, end);

    return 0;
}
