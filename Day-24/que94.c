#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[200];
    int freq[256] = {0};

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        freq[(unsigned char)ch]++;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);

        if (freq[(unsigned char)ch] != 0) {
            printf("%c%d", str[i], freq[(unsigned char)ch]);

            freq[(unsigned char)ch] = 0;
        }
    }

    return 0;
}