// Write a program to reverse a string.
#include <stdio.h>
int main()
{
    int i = 0;
    char str[1000];
    int count = 0;
    printf("Enter the string:\n");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0' && str[i] != '\n')
    {
        count++;
        i++;
    }
    int last_index = count - 1;
    printf("Reverse of a string is:\n");
    for (i = last_index; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    return 0;
}