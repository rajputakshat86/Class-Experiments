#include <stdio.h>

int main() {
    int num, choice;
    int pos = 0, neg = 0, zero = 0;

    while (1) {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num > 0)
            pos++;
        else if (num < 0)
            neg++;
        else
            zero++;

        printf("Do you want to continue? (1 = Yes, 0 = No): ");
        scanf("%d", &choice);

        if (choice == 0)
            break;
    }

    printf("\nTotal Positive numbers = %d", pos);
    printf("\nTotal Negative numbers = %d", neg);
    printf("\nTotal Zeros = %d\n", zero);

    return 0;
}
