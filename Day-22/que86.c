#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[1000];
    int count = 0, inWord = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    for (int i = 0; sentence[i] != '\0'; i++)
    {
        if (sentence[i] != ' ' && sentence[i] != '\n' && sentence[i] != '\t')
        {
            if (!inWord)
            {
                count++;
                inWord = 1;
            }
        }
        else
        {
            inWord = 0;
        }
    }

    printf("Number of words: %d\n", count);
    return 0;
}