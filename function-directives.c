#include <stdio.h>

#define SQUARE(x) ((x) * (x))

#define ADD(a, b) ((a) + (b))

int main()
{

    int num = 5;
    int x = 10, y = 20;

    printf("Square of %d is: %d\n", num, SQUARE(num));
    printf("Addition of %d and %d is: %d\n", x, y, ADD(x, y));

    return 0;
}
