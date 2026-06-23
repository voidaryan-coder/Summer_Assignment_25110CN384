//Write a program to Find string length without strlen().
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
    printf("The length of a string is:%d\n", count);
    return 0;
}