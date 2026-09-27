#include <stdio.h>

int main() {
    char str[100];
    int i, lastSpace = -1;

    fgets(str, sizeof(str), stdin);

    // Find the position of the last space
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            lastSpace = i;
        }
    }

    // Print initials of all words before surname
    printf("%c.", str[0]);

    for (i = 1; i < lastSpace; i++) {
        if (str[i - 1] == ' ' && str[i] != ' ') {
            printf("%c.", str[i]);
        }
    }

    // Print surname in full
    printf(" ");
    for (i = lastSpace + 1; str[i] != '\0' && str[i] != '\n'; i++) {
        printf("%c", str[i]);
    }

    return 0;
}
