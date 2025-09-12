#include <stdio.h>
int main() 
{
    int L;
    printf("Enter limit L: ");
    scanf("%d", &L);
    for (int a = 1; a <= L; a++) {
        for (int b = a; b <= L; b++) {
            for (int c = a + 1; c <= L; c++) {
                int d = (a*a*a + b*b*b) - (c*c*c);
                for (int k = 1; k <= L; k++) {
                    if (k*k*k == d) {
                        printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n",
                               a*a*a + b*b*b, a, b, c, k);
                    }
                }
            }
        }
    }
    return 0;
}

