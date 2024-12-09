#include <stdio.h>
#include <math.h>

void findRoots(int a, int b, int c) {
    int discriminant = b * b - 4 * a * c;
    
    if (discriminant > 0) {
        float root1 = (-b + sqrt(discriminant)) / (2 * a);
        float root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different: %.2f and %.2f\n", root1, root2);
    } else if (discriminant == 0) {
        float root = -b / (2 * a);
        printf("Roots are real and the same: %.2f\n", root);
    } else {
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex: %.2f + %.2fi and %.2f - %.2fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }
}

int main() {
    int a, b, c;
    printf("Enter coefficients a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    findRoots(a, b, c);

    return 0;
}
