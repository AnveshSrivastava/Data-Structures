#include <stdio.h>
#include <math.h>

int main() {
    int basic, allow;
    char grade;
    float hra, da, pf, totalSalary;
    printf("Enter the basic salary: ");
    scanf("%d", &basic);
    printf("Enter the grade (A, B, C, or others): ");
    scanf(" %c", &grade);

    hra = 0.2 * basic;  
    da = 0.5 * basic;   
    pf = 0.11 * basic;  

    if (grade == 'A') {
        allow = 1700;
    } else if (grade == 'B') {
        allow = 1500;
    } else {
        allow = 1300;
    }
    totalSalary = basic + hra + da + allow - pf;
    printf("Total Salary: %d\n", (int)round(totalSalary));

    return 0;
}
