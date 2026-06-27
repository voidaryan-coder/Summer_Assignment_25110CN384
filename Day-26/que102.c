#include <stdio.h>
#include <string.h>

int main()
{
    char name[50];
    int age;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 0 || age > 120)
    {
        printf("Invalid age entered.\n");
    }
    else if (age >= 18)
    {
        printf("\n%s is eligible to vote.\n", name);
    }
    else
    {
        printf("\n%s is not eligible to vote.\n", name);
        printf("You can vote after %d year(s).\n", 18 - age);
    }

    return 0;
}