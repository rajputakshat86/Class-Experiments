#include <stdio.h>
int globalVar = 50;
void myFunction() 
{
    int localVar = 20;  
    printf("Inside myFunction:\n");
    printf("   localVar = %d\n", localVar);
    printf("   globalVar = %d\n", globalVar);
}
int main()
 {
    printf("Inside main:\n");
    printf("   globalVar = %d\n", globalVar);
    myFunction();
    return 0;
}
