#include <stdio.h>

int factorial(int n, int result) {
    if (n == 0 || n == 1)
        return result;
    return factorial(n - 1, n * result);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    printf("Factorial: %d\n", factorial(n, 1));
    
    return 0;
}
