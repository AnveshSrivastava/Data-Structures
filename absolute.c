#include <stdio.h>
#include <math.h>

int hasAdjacentDifferenceOne(int num) {
    int prevDigit = -1;

    while (num > 0) {
        int currentDigit = num % 10;
        if (prevDigit != -1 && abs(currentDigit - prevDigit) != 1) {
            return 0;
        }
        prevDigit = currentDigit;
        num /= 10;
    }

    return 1;
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int arr[n], found = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] < k && hasAdjacentDifferenceOne(arr[i])) {
            printf("%d ", arr[i]);
            found = 1;
        }
    }

    if (!found) {
        printf("-1");
    }

    printf("\n");
    return 0;
}


// min_height_triangle
// return (int)ceil((2.0 * area) / trianglebase);

// max_draws
// return n+1;