#include <stdio.h>
#include <string.h>

int main()
{
    char str[300];
    char longest[100], current[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    int i = 0, j = 0;
    int maxLen = 0;

    while (1)
    {
        if (str[i] != ' ' && str[i] != '\0')
        {
            current[j++] = str[i];
        }
        else
        {
            current[j] = '\0';

            if (j > maxLen)
            {
                maxLen = j;
                strcpy(longest, current);
            }

            j = 0;
        }

        if (str[i] == '\0')
            break;

        i++;
    }

    printf("Longest word: %s\n", longest);
    return 0;
}