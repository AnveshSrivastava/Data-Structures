#include <stdio.h>

void numberPattern(int N) {
    int i, j, num;
    for(i = 1; i <= N; i++) {
        num = i;
        for(j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
}

void letterPattern(int N) {
    int i, j;
    for(i = 1; i <= N; i++) {
        char ch = 'A' + i - 1;
        for(j = 1; j <= i; j++) {
            printf("%c", ch);
            ch++;
        }
        printf("\n");
    }
}

void letterPattern2(int N) {
    int i, j;
    for(i = 1; i <= N; i++) {
        char ch = 'A';  // start with 'A' for the first row
        for(j = 1; j <= i; j++) {
            printf("%c", ch);
        }
        printf("\n");
    }
}

int main() {
    int N = 4;
    
    // Print number pattern
    numberPattern(N);
    
    // Print letter pattern
    letterPattern(N);

    letterPattern2(N);
    
    return 0;
}
