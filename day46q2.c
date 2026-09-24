#include <stdio.h>

int main() {
    char str[100];
    int count[26] = {0};
    int i;

    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            count[str[i] - 'a']++;

            if (count[str[i] - 'a'] == 2) {
                printf("%c", str[i]);
                break;
            }
        }
    }

    return 0;
}
