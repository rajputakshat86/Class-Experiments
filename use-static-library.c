#include <stdio.h>


#ifndef MYLIB_H
#define MYLIB_H

int max(int a, int b);
int min(int a, int b);

#endif



int max(int a, int b) {
    return (a > b) ? a : b;
}

int min(int a, int b) {
    return (a < b) ? a : b;
}


int main() {

    int x = 10;
    int y = 20;

    printf("Maximum = %d\n", max(x, y));
    printf("Minimum = %d\n", min(x, y));

    return 0;
}
