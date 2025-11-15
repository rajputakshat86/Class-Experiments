#include <stdio.h>

#define ADD(a, b) ((a) + (b))
#define SUB(a, b) ((a) - (b))
#define MUL(a, b) ((a) * (b))
#define DIV(a, b) ((b != 0) ? ((a) / (b)) : 0)

int main()
{

    int x = 20, y = 5;

    printf("Addition of %d and %d = %d\n", x, y, ADD(x, y));
    printf("Subtraction of %d and %d = %d\n", x, y, SUB(x, y));
    printf("Multiplication of %d and %d = %d\n", x, y, MUL(x, y));
    printf("Division of %d and %d = %d\n", x, y, DIV(x, y));

    return 0;
}
