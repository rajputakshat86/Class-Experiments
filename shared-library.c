#include <stdio.h>

#ifndef ARITHMETIC_H
#define ARITHMETIC_H

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int divide(int a, int b);

#endif

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int divide(int a, int b)
{
    if (b == 0)
        return 0;
    return a / b;
}

int main()
{

    int x = 20, y = 4;

    printf("Addition = %d\n", add(x, y));
    printf("Subtraction = %d\n", sub(x, y));
    printf("Multiplication = %d\n", mul(x, y));
    printf("Division = %d\n", divide(x, y));

    return 0;
}
