#include <stdio.h>

int main() {
    FILE *f;
    char ch;

    f = fopen("newfile.txt", "r");
    if (f == NULL) {
        printf("Error! File not found.");
        return 1;
    }

    while ((ch = fgetc(f)) != EOF) {
        printf("%c", ch);
    }

    fclose(f);
    return 0;
}
