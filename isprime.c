#include <stdio.h>

int ISPRIME(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return 0;
    return 1;
}

int main() {
    int low, high;
    printf("Enter range: ");
    scanf("%d %d", &low, &high);

    printf("Primes between %d and %d:\n", low, high);
    for (int i = low; i <= high; i++)
        if (ISPRIME(i)) printf("%d ", i);
    return 0;
}
