#include <stdio.h>

int main() {
    int day, month, year, h;
    printf("Enter day, month, and year (dd mm yyyy): ");
    scanf("%d %d %d", &day, &month, &year);

    if (month < 3) {
        month += 12;
        year -= 1;
    }

    h = (day + 13 * (month + 1) / 5 + year + year / 4 - year / 100 + year / 400) % 7;

    switch (h) {
        case 0: printf("Saturday\n"); break;
        case 1: printf("Sunday\n"); break;
        case 2: printf("Monday\n"); break;
        case 3: printf("Tuesday\n"); break;
        case 4: printf("Wednesday\n"); break;
        case 5: printf("Thursday\n"); break;
        case 6: printf("Friday\n"); break;
    }

    return 0;
}
