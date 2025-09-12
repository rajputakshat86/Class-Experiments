#include <stdio.h>
#include <math.h>
int main() {
    int year;
    double population = 100000;   
    double rate = 0.10;           

    printf("Year\tPopulation\n");
    printf("----------------------\n");

    for(year = 1; year <= 10; year++) {
        population = population * (1 + rate);  
        printf("%d\t%.0f\n", year, population); 
    }

    return 0;
}
