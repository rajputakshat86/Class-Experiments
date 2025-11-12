#include <stdio.h>

int main()
{
    FILE *fp;
    char text[100];

    fp = fopen("newfile.txt", "w");

    if (fp == NULL)
    {
        printf("Error! Could not create file.\n");
        return 1;
    }

    printf("Enter text to write into the file: ");
    fgets(text, sizeof(text), stdin);

    fprintf(fp, "%s", text);

    fclose(fp);

    printf("File created successfully! Text written to newfile.txt\n");

    return 0;
}
