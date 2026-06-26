#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100];
    int freq[256] = {0};

    printf("Enter string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = tolower(str[i]);
        freq[(unsigned char)ch]++;
    }

    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = tolower(str[i]);

        if (freq[(unsigned char)ch] == 1)
        {
            printf("First non-repeating character: %c\n", str[i]);
            return 0;
        }
    }

    printf("No non-repeating character found.\n");
    return 0;
}