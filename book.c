#include <stdio.h>
struct Book 
{
    int book_id;
    char title[50];
    char author[50];
    float price;
};
void display(struct Book b) 
{
    printf("\nBook Details:\n");
    printf("ID: %d\nTitle: %s\nAuthor: %s\nPrice: %.2f\n", b.book_id, b.title, b.author, b.price);
}
int main() 
{
    struct Book b1;
    printf("Enter Book ID, Title, Author, and Price:\n");
    scanf("%d %s %s %f", &b1.book_id, b1.title, b1.author, &b1.price);
    display(b1);
    return 0;
}
