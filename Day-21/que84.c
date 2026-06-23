// Write a program to convert lowercase to uppercase.
#include <stdio.h>
int main()
{
    int i = 0;
    char str[100];
    printf("Enter the string:\n");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0' && str[i] != '\n')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        i++;
    }
    printf("After coverting into uppercase ,the string is:\n");
    i = 0;
    while (str[i] != '\0' && str[i] != '\n')
    {
        printf("%c", str[i]);
        i++;
    }
    return 0;
}