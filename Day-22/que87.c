#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100], ch;
    int count = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter character to find: ");
    scanf("%c", &ch);
    ch = tolower(ch);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (tolower(str[i]) == ch)
            count++;
    }
    printf("Frequency of %c = %d", ch, count);
    return 0;
}