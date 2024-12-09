#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int left = 0, right = n - 1;

    while (left < right) {
        if (arr[left] >= arr[right]) {
            left++;
        } else {
            right--;
        }
    }

    printf("%d\n", arr[right]);
    return 0;
}
