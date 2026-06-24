#include <stdio.h>

int main()
{
    char str[1000];
    char rev[1000];
    int i, k = 0, count = 0;
    int palindrome = 1;

    printf("Enter the string:\n");
    fgets(str, sizeof(str), stdin);

    while (str[count] != '\0' && str[count] != '\n')
    {
        count++;
    }

    for (i = count - 1; i >= 0; i--)
    {
        rev[k++] = str[i];
    }

    rev[k] = '\0';

    printf("Reversed string: %s\n", rev);

    for (i = 0; i < count; i++)
    {
        if (str[i] != rev[i])
        {
            palindrome = 0;
            break;
        }
    }

    if (palindrome)
        printf("It is a palindrome string\n");
    else
        printf("It is not a palindrome string\n");

    return 0;
}