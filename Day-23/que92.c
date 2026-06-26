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
    int i, max = 0, k;
    for (i = 0; str[i] != '\0'; i++)
    {
        char ch = tolower(str[i]);
        if (freq[(unsigned char)ch] > max)
        {
            max = freq[(unsigned char)ch];
            k = i;
        }
    }
    if (max == 1)
        printf("No repeating characters.");
    else
        printf("Maximum occurring character: %c\n", str[k]);
    return 0;
}