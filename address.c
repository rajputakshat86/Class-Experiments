#include <stdio.h>
union Address 
{
    char name[50];
    char home_address[100];
    char hostel_address[100];
    char city[50];
    char state[50];
    char zip[10];
};
int main() {
    union Address addr;
    printf("Enter your present address: ");
    scanf("%[^\n]", addr.hostel_address); 
    printf("\nYour present address is: %s\n", addr.hostel_address);
    return 0;
}
