// Write a program to count vowels and consonants.
#include <stdio.h>
int main()
{
    char str[1000];
    int i = 0;
    int vowel = 0;
    int consonant = 0;
    printf("Enter the string:\n");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0' && str[i] != '\n')
    {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' ||
            str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            vowel++;
        }
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            consonant++;
        }
        i++;
    }
    printf("Vowels in a string are: %d\n", vowel);
    printf("consonants in a string are: %d\n", consonant);

    return 0;
}