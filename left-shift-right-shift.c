#include <stdio.h>

int main() {
    int a;

    printf("Enter an integer: ");
    scanf("%d", &a);

    printf("\nLeft shift (a << 1) = %d", a << 1);
    printf("\nRight shift (a >> 1) = %d", a >> 1);

    return 0;
}
