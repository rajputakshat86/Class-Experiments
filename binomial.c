#include <stdio.h>

int fact(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * fact(n - 1);
    }
}

int binomial_coefficient(int n, int r) {
    return fact(n) / (fact(r) * fact(n - r));
}

int main() {
    int n, r;

    printf("Enter value of n: ");
    scanf("%d", &n);

    printf("Enter value of r: ");
    scanf("%d", &r);

    if (r > n || r < 0 || n < 0) {
        printf("Invalid input! Make sure that 0 <= r <= n and both are non-negative.\n");
    } else {
        printf("Factorial of %d is %d\n", n, fact(n));
        printf("Binomial Coefficient C(%d, %d) is %d\n", n, r, binomial_coefficient(n, r));
    }

    return 0;
}