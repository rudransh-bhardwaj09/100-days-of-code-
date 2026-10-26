#include <stdio.h>

int main() {
    FILE *source, *destination;
    char sourceFile[100], destinationFile[100];
    int ch;

    printf("Enter source filename: ");
    scanf("%s", sourceFile);

    printf("Enter destination filename: ");
    scanf("%s", destinationFile);

    source = fopen(sourceFile, "r");

    if (source == NULL) {
        printf("Source file not found!\n");
        return 1;
    }

    destination = fopen(destinationFile, "w");

    if (destination == NULL) {
        printf("Unable to create destination file!\n");
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    printf("File copied successfully to %s\n", destinationFile);

    return 0;
}