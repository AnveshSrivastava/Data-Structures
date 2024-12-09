#include <stdio.h>

int maxArea(int height[], int n) {
    int max_area = 0;
    int left = 0, right = n - 1;
    
    while (left < right) {
        int min_height = height[left] < height[right] ? height[left] : height[right];
        int width = right - left;
        int area = min_height * width;
        max_area = area > max_area ? area : max_area;
        
        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }
    return max_area;
}

int main() {
    int n;
    printf("Enter number of heights: ");
    scanf("%d", &n);
    
    int height[n];
    printf("Enter the heights: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &height[i]);
    }

    printf("Maximum area: %d\n", maxArea(height, n));

    return 0;
}
