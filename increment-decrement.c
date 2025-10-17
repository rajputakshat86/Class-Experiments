#include <stdio.h>
int main()
 {
    int i = 10;
    float f = 3.14;
    char c = 'A';
    int *pi = &i;
    float *pf = &f;
    char *pc = &c;
    printf("Original addresses:\npi=%p, pf=%p, pc=%p\n", (void*)pi, (void*)pf, (void*)pc);
    pi++; 
    pf++; 
    pc++; 
    printf("After increment:\npi=%p, pf=%p, pc=%p\n", (void*)pi, (void*)pf, (void*)pc);
    pi--; 
    pf--; 
    pc--; 
    printf("After decrement:\npi=%p, pf=%p, pc=%p\n", (void*)pi, (void*)pf, (void*)pc);
    return 0;
}
