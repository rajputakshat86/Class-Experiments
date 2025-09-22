#include <stdio.h>

int main() {
    int n, i;
    int positive = 0, negative = 0, even = 0, odd = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

       
        if (arr[i] > 0)
            positive++;
        else if (arr[i] < 0)
            negative++;

      
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("\nCount of Positive numbers = %d", positive);
    printf("\nCount of Negative numbers = %d", negative);
    printf("\nCount of Even numbers = %d", even);
    printf("\nCount of Odd numbers = %d\n", odd);

    return 0;
}

