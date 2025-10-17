#include <stdio.h>
int main() 
{
    int i = 10;
    float f = 3.14;
    char c = 'A';
    int *p1 = &i;
    float *p2 = &f;
    char *p3 = &c;
    printf("Values of variables:\n");
    printf("i = %d, f = %.2f, c = %c\n", i, f, c);
    printf("\nValues using pointers:\n");
    printf("*p1 = %d, *p2 = %.2f, *p3 = %c\n", *p1, *p2, *p3);
    printf("\nAddresses stored in pointers:\n");
    printf("p1 = %p, p2 = %p, p3 = %p\n", (void*)p1, (void*)p2, (void*)p3);
    return 0;
}
