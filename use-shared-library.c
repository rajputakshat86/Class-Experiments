#include <stdio.h>

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
    {
        printf("Error! Division by zero.\n");
        return 0;
    }
    return a / b;
}

int main()
{

    int a = 20, b = 10;

    printf("Addition = %d\n", add(a, b));
    printf("Subtraction = %d\n", sub(a, b));
    printf("Multiplication = %d\n", mul(a, b));
    printf("Division = %d\n", divide(a, b));

    return 0;
}
