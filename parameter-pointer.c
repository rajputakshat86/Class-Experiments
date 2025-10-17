#include <stdio.h>
void modifyValues(int *a, int *b) 
{
    *a = *a + 10;  
    *b = *b * 2;   
}
int main() 
{
    int x = 5;
    int y = 7;
    printf("Before function call:\n");
    printf("x = %d, y = %d\n", x, y);
    modifyValues(&x, &y);
    printf("After function call:\n");
    printf("x = %d, y = %d\n", x, y);
    return 0;
}
