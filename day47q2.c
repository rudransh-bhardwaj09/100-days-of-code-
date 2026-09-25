#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char word[100], longest[100];
    int i = 0, j = 0;
    int maxLength = 0, length;

    fgets(str, sizeof(str), stdin);

    while (1) {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\0') {
            word[j] = str[i];
            j++;
        }
        else {
            word[j] = '\0';
            length = j;

            if (length > maxLength) {
                maxLength = length;
                strcpy(longest, word);
            }

            j = 0;
        }

        if (str[i] == '\0' || str[i] == '\n')
            break;

        i++;
    }

    printf("%s", longest);

    return 0;
}
