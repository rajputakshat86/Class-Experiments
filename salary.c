#include <stdio.h>
struct Employee 
{
    char name[50];
    float basic, da, gross;
};
int main() 
{
    struct Employee emp[100];
    int i;
    for(i = 0; i < 100; i++) {
        printf("Enter name and basic pay of employee %d: ", i + 1);
        scanf("%s %f", emp[i].name, &emp[i].basic);
        emp[i].da = 0.52 * emp[i].basic;
        emp[i].gross = emp[i].basic + emp[i].da;
    }
    printf("\nEmployee Name\tGross Salary\n");
    for(i = 0; i < 100; i++)
        printf("%s\t\t%.2f\n", emp[i].name, emp[i].gross);

    return 0;
}

