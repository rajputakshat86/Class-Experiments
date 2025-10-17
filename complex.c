#include <stdio.h>
struct Complex 
{
    float real;
    float imag;
};
struct Complex readComplex() 
{
    struct Complex c;
    printf("Enter real and imaginary parts: ");
    scanf("%f %f", &c.real, &c.imag);
    return c;
}
void writeComplex(struct Complex c) 
{
    printf("Complex number: %.2f + %.2fi\n", c.real, c.imag);
}
struct Complex add(struct Complex a, struct Complex b) 
{
    struct Complex result = {a.real + b.real, a.imag + b.imag};
    return result;
}
struct Complex subtract(struct Complex a, struct Complex b)
 {
    struct Complex result = {a.real - b.real, a.imag - b.imag};
    return result;
}
int main() 
{
    struct Complex c1, c2, sum, diff;
    printf("Enter first complex number:\n");
    c1 = readComplex();
    printf("Enter second complex number:\n");
    c2 = readComplex();
    sum = add(c1, c2);
    diff = subtract(c1, c2);
    printf("\n");
    printf("First "); writeComplex(c1);
    printf("Second "); writeComplex(c2);
    printf("\nSum "); writeComplex(sum);
    printf("Difference "); writeComplex(diff);

    return 0;
}
