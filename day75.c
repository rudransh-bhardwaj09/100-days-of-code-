#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char text[200];

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "a");

    if (fp == NULL) {
        printf("Unable to open file!\n");
        return 1;
    }

    printf("Enter text to append: ");
    getchar();
    fgets(text, sizeof(text), stdin);

    fprintf(fp, "\n%s", text);

    fclose(fp);

    printf("File updated successfully with appended text.\n");

    return 0;
}