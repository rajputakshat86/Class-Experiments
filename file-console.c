#include <stdio.h>

int main() {
    FILE *f;
    char line[200];

    f = fopen("newfile.txt", "r");
    if (f == NULL) {
        printf("Error! File not found.");
        return 1;
    }

    while (fgets(line, sizeof(line), f)) {
        printf("%s", line);
    }

    fclose(f);
    return 0;
}
