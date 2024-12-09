#include <stdio.h>

int main() {
    float x, y;

    printf("Enter X and Y coordinates: ");
    scanf("%f %f", &x, &y);

    if (x > 0 && y > 0) {
        printf("The point lies in the First Quadrant\n");
    } else if (x < 0 && y > 0) {
        printf("The point lies in the Second Quadrant\n");
    } else if (x < 0 && y < 0) {
        printf("The point lies in the Third Quadrant\n");
    } else if (x > 0 && y < 0) {
        printf("The point lies in the Fourth Quadrant\n");
    } else if (x == 0 && y != 0) {
        printf("The point lies on the Y-axis\n");
    } else if (y == 0 && x != 0) {
        printf("The point lies on the X-axis\n");
    } else {
        printf("The point is at the Origin\n");
    }

    return 0;
}
