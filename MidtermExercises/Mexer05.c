#include <stdio.h>

int main() {
    double grossS, tax;

    printf("Input the gross salary of the employee: ");
    scanf("%lf", &grossS);

    if (grossS <= 50000) {
        tax = 0.10 * grossS;
    } else if (grossS <= 100000) {
        tax = 5000 + 0.15 * (grossS - 50000);
    } else if (grossS <= 200000) {
        tax = 15000 + 0.20 * (grossS - 100000);
    } else {
        tax = 0.25 * grossS;
    }

    printf("The tax due is: %.2lf\n", tax);

    return 0;
}

