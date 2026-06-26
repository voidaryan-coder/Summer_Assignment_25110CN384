#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str1[200], str2[200];
    int freq[256] = {0};

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if (len1 != len2)
    {
        printf("Not an anagram\n");
        return 0;
    }

    for (int i = 0; str1[i] != '\0'; i++)
    {
        char ch = tolower(str1[i]);
        freq[(unsigned char)ch]++;
    }

    for (int i = 0; str2[i] != '\0'; i++)
    {
        char ch = tolower(str2[i]);
        freq[(unsigned char)ch]--;
    }

    for (int i = 0; i < 256; i++)
    {
        if (freq[i] != 0)
        {
            printf("Not an anagram\n");
            return 0;
        }
    }

    printf("Strings are anagrams\n");
    return 0;
}