#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    int seen[256] = {0};

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("Result: ");

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (seen[(unsigned char)str[i]] == 0)
        {
            printf("%c", str[i]);
            seen[(unsigned char)str[i]] = 1;
        }
    }
    return 0;
}