#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n], max_height = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > max_height) {
            max_height = arr[i];
        }
    }

    printf("%d\n", max_height);
    return 0;
}
